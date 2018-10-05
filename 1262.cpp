#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    string rastro;
    int processo, ciclo, conta;

    while(cin >> rastro >> processo){
        ciclo = 0;
        conta = 0;
        for(int i=0;i<rastro.size();i++){
            if(rastro[i] == 'R'){
                conta++;
                if(conta >= processo){
                    ciclo++;
                    conta = 0;
                }
            }
            else if(rastro[i] == 'W'){
                ciclo++;
                if(conta <= processo and conta != 0){
                    ciclo++;
                    conta = 0;
                }
            }
        }
        if(conta <= processo and conta != 0){
            ciclo++;
        }
        cout << ciclo << endl;
    }

    return 0;
}
