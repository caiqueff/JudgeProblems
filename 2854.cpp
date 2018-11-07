#include <bits/stdc++.h>

using namespace std;

typedef map<string, int> msi;
typedef map<string, string> mss;
typedef vector<string> vs;

class UnionFind{

private:
    msi programmingLevel, rank, setSize;
    mss p;
    vs names;
    int numSets;
public:
    UnionFind(int N){
        numSets = N;
    }


    void fillValues(){
        for(int i=0; i<names.size(); i++){
            setSize[names[i]] = 1;
            rank[names[i]] = 0;
        }
    }


    string findSet(string i){
        if(p[i] == i || p[i] == "") {
            return i;
        }
        return (p[i] = findSet(p[i]));
    }


    bool isSameSet(string i, string j){
        return findSet(i) == findSet(j);
    }


    void unionSet(string i, string j){
        if (!isSameSet(i, j)){
            numSets--;
            string x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y]){
                p[y] = x;
                setSize[x] += setSize[y];
            } else {
                p[x] = y;
                setSize[y] += setSize[x];
                if (rank[x] == rank[y])
                    rank[y]++;
            }
        }
    }


    int numDisjointSets(){
        return numSets;
    }


    int sizeOfSet(string i){
        return setSize[findSet(i)];
    }
};

int main()
{
    int n, m;

    #ifndef ONLINE_JUDGE
        freopen("2854.in", "r", stdin);
    #endif // ONLINE_JUDGE

    scanf("%d%d", &n, &m);

    UnionFind uf(n);

    string n1, relation, n2;
    while(m--) {
        cin >> n1 >> relation >> n2;

        uf.unionSet(n1, n2);
    }

    printf("%d\n", uf.numDisjointSets());

    return 0;
}
