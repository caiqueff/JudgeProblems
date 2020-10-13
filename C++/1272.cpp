#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int n;
    string pedaco, linha, msg = "";

    cin >> n;
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin, linha);
        stringstream wow(linha);
        while(wow >> pedaco){
            msg = msg + pedaco[0];
        }
        cout << msg << endl;
        msg = "";
    }

    return 0;
}

