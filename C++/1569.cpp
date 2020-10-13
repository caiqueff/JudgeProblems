#include <iostream>
using namespace std;

 struct escPos{
    int i;
    int f;
 };

int main(){
 int N;
 cin>>N;

 while (N--){
    int jogadores, Nesc, jogadas;
    cin >> jogadores >> Nesc >> jogadas;
    int jogadoresPos[jogadores];
    escPos esc[Nesc];

    for (int i = 0; i < jogadores; i++){
        jogadoresPos[i] = 1;
    }
    for (int i = 0; i < Nesc; i++){
        cin>> esc[i].i >> esc[i].f;
    }

    int dado;
    int flag=0;
    bool fimDeJogo = false;
    for (int i = 0; i < jogadas; i++){
      cin>> dado;
        if (!fimDeJogo) {
          jogadoresPos[flag] += dado;
          for (int k = 0; k < Nesc; k++){
            if (jogadoresPos[flag] == esc[k].i) {
              jogadoresPos[flag] = esc[k].f;
            }
          }
          if (jogadoresPos[flag] >= 100) {
            jogadoresPos[flag] = 100;
            fimDeJogo = true;
          }
          flag == jogadores-1 ? flag = 0 : flag++;
        }
    }
    for (int j = 0; j < jogadores; j++){
        cout<<"Position of player "<<j + 1<<" is "<<jogadoresPos[j]<<"."<<endl;
    }
  }
}