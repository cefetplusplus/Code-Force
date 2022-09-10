#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 2e5+10;

int n,q,start,step,vet[MAX],aux, cont=1, res, sum[MAX];
vector<set<int>> graph(MAX);
map<int, int> pos;

int dfs(int v){
    vet[cont] = v; cont++;
    pos[v] = cont-1;
    int sumR = 0;

    for(auto item:graph[v]){
        sumR += dfs(item);
    };
    sumR++;
    sum[v] = sumR;
    return sumR;
}

int main(){_
    cin>>n>>q;
    for(int i=2; i<n+1; i++){
        cin>>aux;
        graph[aux].insert(i);
    }
    memset(vet, -1, sizeof vet);
    dfs(1);

    while(q--){
        cin>>start>>step;
        res = sum[start] >= step ? vet[pos[start]+step-1] : -1;
        cout<<res<<endl;
    }
    return 0;
}