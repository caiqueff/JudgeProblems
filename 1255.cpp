#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int n, lettre[200], maior = 0;
    string linha, resultadow, palavbra;

    cin >> n;
    cin.get();

    for(int i=0;i<n;i++){
        getline(cin, linha);
        for(int j=0;j<200;j++){
            lettre[j]=0;
        }
        for(int j=0;j<linha.size();j++){
            if (tolower(linha[j]) >= 'a' and tolower(linha[j]) <= 'z'){
                lettre[tolower(linha[j])]++;
                if(lettre[tolower(linha[j])] > maior){
                    maior = lettre[tolower(linha[j])];
                }
            }
        }
        for(int j='a';j<='z';j++){
            if(lettre[j] == maior) cout << (char)j;
        }
        maior = 0;
        cout << endl;
    }

    return 0;
}