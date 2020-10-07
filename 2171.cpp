#include <cstdio>

using namespace std;

int main()
{
    int n, nFink, nPicapau, rodada;
    while(scanf("%d", &n) != EOF && n != 0)
    {
        nFink = nPicapau = 0;
        rodada = 1;
        while(n > 0)
        {
            nPicapau++;
            n -= rodada + 1;
            nFink += rodada;
            if(n < 0)
            {
                nPicapau += n;
            }
            rodada++;
        }
        printf("%d %d\n", nFink, nPicapau);
    }
    return 0;
}
