#include <iostream>
#include <cstdio>

#define TAM 9
#define INFINITO 987987987

using namespace std;

typedef struct {
    int origem,destino,peso;
} ARESTA;

int distancia [65];

int returnCount(char c, int i) {
   return ( (c - 'a') * 8 ) + i;
}

int BellmanFord(ARESTA aresta[], int n_arestas, int n_nodos, int origem, int destino) {
   int i,j,trocou=1;
   for (i = 0; i < n_nodos; i++) {
      distancia[i] = INFINITO;
   }

   distancia[origem]=0;
   for (i = 0; i < n_nodos ; i++) { // se nenhuma iteração teve efeito, ~trocou portanto sai
      for (j = 0; j < n_arestas; j++) {
         if (distancia[aresta[j].destino] > distancia[aresta[j].origem] + aresta[j].peso) {
            distancia[aresta[j].destino] = distancia[aresta[j].origem] + aresta[j].peso;
         }
      }
   }

   return distancia[destino];
}

int main() {
    ARESTA arestas[340];
    int tabuleiro[TAM][TAM]; // pode ser char
    int cont = 1, i, j;
    for(i = 1; i < TAM; i++) {
        for(j = 1; j < TAM; j++) {
            tabuleiro[i][j] = cont++;
        }
    }

    cont = 0;
    for(i = 1; i < TAM; i++) {
        for(j = 1; j < TAM; j++) {
            ///Flood-Fill
            if( i+1 < TAM and j+2 < TAM ) {/// movimento 6
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i+1][j+2];
                arestas[cont].peso = 1;
                cont++;
            }

            if( i-1 > 0  and j+2 < TAM ) {///movimento 5
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i-1][j+2];
                arestas[cont].peso = 1;
                cont++;
            }

            if( i-2 > 0  and j+1 < TAM ) {///movimento 2
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i-2][j+1];
                arestas[cont].peso = 1;
                cont++;
            }
            if( i-2 > 0  and j-1 > 0 ) {///movimento 1
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i-2][j-1];
                arestas[cont].peso = 1;
                cont++;
            }
            if( i-1 > 0  and j-2 > 0 ) {///movimento 3
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i-1][j-2];
                arestas[cont].peso = 1;
                cont++;
            }
            if( i+1 < TAM  and j-2 > 0 ) {///movimento 4
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i+1][j-2];
                arestas[cont].peso = 1;
                cont++;
            }
            if( i+2 < TAM  and j-1 > 0 ) {///movimento 7
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i+2][j-1];
                arestas[cont].peso = 1;
                cont++;
            }
            if( i+2 < TAM and j+1 < TAM ) {///movimento 8
                arestas[cont].origem  = tabuleiro[i][j];
                arestas[cont].destino = tabuleiro[i+2][j+1];
                arestas[cont].peso = 1;
                cont++;
            }
        }
    }

    string s1, s2;
    while(cin >> s1 && cin >> s2) {
        int numSaida, numChegada;
        numSaida = returnCount(s1[0], (int) s1[1] - '0');
        numChegada = returnCount(s2[0], (int) s2[1] - '0');

        ///          vetor   num ar,  nodos,  origem,  destino
        int n = BellmanFord(arestas, cont,  65,  numSaida, numChegada);
        cout << "To get from " << s1 << " to " << s2 << " takes " << n << " knight moves." << endl;
    }

    return 0;
}