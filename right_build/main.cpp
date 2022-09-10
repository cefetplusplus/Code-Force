#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

typedef long long ll;

const int MAX = 2e5 + 10;
int cost[MAX];
int cost2[MAX];
int path[MAX];

int n,m,a,b;
map<int,vector<int>> graph;
queue<int> current;

int res = 0xb3b3b3b3;

int mbfs(int search){
    int it = search == a ? b : a;
    queue<int> visited;
    memset(cost2, -1, sizeof cost2);

    visited.push(0);
    cost2[0] = 0;
    
    while(it != 0){
        cost2[it] = 0;
        visited.push(it);
        it = path[it];
    }

    while(!visited.empty()){
        int node = visited.front(); visited.pop();
        if(node == search) return 0;
        for(auto item : graph[node]){
            if(cost2[item] == -1){
                cost2[item] = cost2[node] + 1;
                visited.push(item);
                if(item == search) return cost2[item];
            }
        }
    }
    return -1;
}

int bfs(){
    int res = 0, des1, des2;
    while(!current.empty()){
        int node = current.front(); current.pop(); 
        for(auto item : graph[node]){
            if(cost[item] == 0){
                path[item] = node; current.push(item);
                cost[item] = cost[node] + 1;

                if(item == a || item == b) res++;
        
                if (res == 2){
                    des1 = mbfs(a); des2 = mbfs(b);
                    cout<<"B->A:"<<des1<<"   A->B:"<<des2<<"   A:"<<cost[a]<<"   B:"<<cost[b]<<endl;
                    return min(des1+cost[b], des2+cost[a]);
                }
            }
        }
    }
    return -1;
}

int main(){
    cin>>n>>m>>a>>b;
    int dad, son;
    while(m--){
        cin>>dad>>son;
        graph[dad].push_back(son);
    }
    memset(cost, 0, sizeof cost);
    current.push(0);
    cout<<bfs()<<endl;
    exit(0);
}



/*

6 7 6 4
0 1
4 0
1 2 
3 4
2 5
5 6
6 3

8 10 7 6
0 1
0 3
1 4
4 3
4 2
2 1
4 6
4 5
5 7
7 8

4 5 3 4
0 1
1 3
0 2
2 4
1 4

12 14 9 11
0 1
1 4
4 7
7 10
10 11
0 2
2 5
5 8
5 12
8 10
0 3
3 6
6 9
12 9

*/