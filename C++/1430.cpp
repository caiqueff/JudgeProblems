#include <iostream>
#include <cstring>
#include <cstdio>
#include <map>

using namespace std;

int main() {
    char linha[200];
    int cont;
    double total;
    map <char,double> mapa;
    mapa['W'] = 1.0;          mapa['H'] = 1 / 2.0;    mapa['Q'] = 1 / 4.0;    mapa['E'] = 1 / 8.0;
    mapa['S'] = 1 / 16.0;     mapa['T'] = 1 / 32.0;   mapa['X'] = 1 / 64.0;

    while(1) {
        gets(linha);
        cont = 0;
        if (linha[0]=='*') {
            break;
        }
        for (int i=0; i<strlen(linha); i++){
            if (linha[i]=='/' && total == 1.0){
                total=0.0;
                cont++;
            }else if (linha[i]=='/'){
                total=0.0;
            }else{
                total += mapa[linha[i]];
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
