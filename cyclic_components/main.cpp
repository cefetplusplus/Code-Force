#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
const int MAX = 2*(1e5 + 10);

int m,n, qtdV, qtdC, aux, visited[MAX];
vector<vector<int>> graph(MAX);
bool err;

void dfs(int vertex){
    visited[vertex]++;
    qtdV++;
    for(auto v:graph[vertex]){
        if(visited[v]<=0) dfs(v);
        else{
            visited[v]++;
            if(visited[v] == 2)qtdC++;
            if(visited[v] > 2 && v != aux) err = true;
        }
    }
}

int main(){_
    cin>>n>>m;
    int a,b, res=0;
    memset(visited, 0, sizeof visited);
    for(int i=0; i<m; i++){
        cin>>a>>b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }    

    for(int i=0; i<n; i++){
        qtdV = 0; qtdC = 0; err = false;
        if(visited[i] == 0){  
            aux = i; dfs(i);
            if(qtdC == qtdV && !err && graph[i].size() > 1) res++;
        }  
    }

    cout<<res<<endl;
    return 0;
}