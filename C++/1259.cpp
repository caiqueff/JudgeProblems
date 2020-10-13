#include <iostream>
#include <algorithm>

using namespace std;

bool sorteaImpCresParDescres(int a, int b){
    if (a%2==0 and b%2==0) return a < b;
    if (a%2!=0 and b%2!=0) return a > b;
    return abs(a%2) < abs(b%2);
}

int main(){

    int n;

    cin >> n;

    int dados[n];

    for(int i=0;i<n;i++){
        cin >> dados[i];
    }

    sort(dados, dados+n, sorteaImpCresParDescres);
    for(int i=0; i<n; i++){
        cout << dados[i] << endl;
    }

    return 0;
}
