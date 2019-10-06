#include <bits/stdc++.h>
#define MAX 310

using namespace std;

struct bag{
    int qtd=0, peso=0;
};

bag t[MAX][MAX], a, b;

bag mochila(int wei[], int val[], int n, int capacity){
    for (int col=0; col <=capacity; col++) {
        t[0][col].qtd=0;
        for (int i=1; i <= n; i++) {
            a = t[i-1][col];
            if (wei[i] > col){
                b=t[0][col];
            } else {
                b=t[i-1][col-wei[i]];
                b.qtd+=val[i];
            }
            if (a.qtd>=b.qtd)
                t[i][col] = a;
            else{
                t[i][col] = b;
                t[i][col].peso++;
            }
        }
    }
    return t[n][capacity];
}

int getTotalWeight(int x){
    int w = -1, weight = 0;
    for(int i=0; i<=50; i++){
        if(t[x][i].qtd > w){
            w = t[x][i].qtd;
            weight = i;
        }
    }
    return weight;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin >> n;

    while(n--){
        int w[MAX], v[MAX], totPac=0;

        cin >> x;

        for(int i=1; i<=x; i++){
            cin >> v[i] >> w[i];
            totPac+=v[i];
        }

        bag m = mochila(w, v, x, 50);
        int totalWeight = getTotalWeight(x);
        printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n\n", m.qtd, totalWeight, x-m.peso);
    }

    return 0;
}