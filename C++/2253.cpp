#include <iostream>

using namespace std;

int main()
{
    string senha;
    int teste=1;
    int contMaiusculas,contMinusculas,contNumeros,contOutros;

    while(getline(cin,senha)){
        int tam=senha.size();
        contMaiusculas=0,contMinusculas=0,contNumeros=0,contOutros=0;
        for(int i=0;i<tam;i++){
            if(senha[i]>='A' and senha[i]<='Z') contMaiusculas++;
            else if(senha[i]>='a' and senha[i]<='z') contMinusculas++;
            else if(senha[i]>='0' and senha[i]<='9') contNumeros++;
            else contOutros++;
        }
        if(contMaiusculas==0 or contMinusculas==0 or contNumeros==0 or contOutros>=1 or tam<6 or tam>32) cout << "Senha invalida." << endl;
        else cout << "Senha valida." << endl;
    }

    return 0;
}
