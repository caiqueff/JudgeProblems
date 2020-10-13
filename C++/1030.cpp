#include <iostream>
#include <cstdio>

using namespace std;

int g (int n, int k){

    if (n == 1) return 0;
    else return (g(n-1,k) + k) % n;

}

int main(){
 int casos, N,M;
 cin>>casos;
    for(unsigned int h = 1; h<=casos; h++){
        cin>>N>>M;
        printf("Case %d: %d\n", h, g(N,M) + 1);
    }
return 0;
}
