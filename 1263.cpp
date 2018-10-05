#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    int num = 0, process = 0;
    string linha, palavbra;
    char letra = '0', letranova = '&';

    while(getline(cin, linha)){
      if(linha == "eof") break;
      stringstream paranaue(linha);
      while (paranaue >> palavbra){
        letranova = (char)tolower(palavbra[0]);

        if(letranova == letra){
            process = 1;
        }
        else
            if(process == 1){
                num++;
                process = 0;
            }
        letra = letranova;
      }
      if(process == 1){
        num++;
        process = 0;
      }
      cout << num << endl;
      num = 0;
    }

    return 0;
}