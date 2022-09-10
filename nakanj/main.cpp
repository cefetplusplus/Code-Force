#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

vector<pair<int,int>> moves = {{-2,1},{-2,-1},{2,1},{2,-1}, {-1,2},{1,2},{-1,-2},{1,-2}};
int chess[8][8];
char x, y, xf, yf;

bool valid(pair<int,int> xy){
    return xy.first >= 0 and xy.second >= 0 and xy.first < 8 
            and xy.second < 8 and chess[xy.second][xy.first] == 0;
}

int bfs(pair<int,int> pos){
    queue<pair<int,int>> filaBFS; filaBFS.push(pos); 
    chess[pos.second][pos.first]++;

    while(!filaBFS.empty()){
        pos = filaBFS.front(); filaBFS.pop(); 
        for(auto cur : moves){
            cur.first += pos.first; cur.second += pos.second;
            if(valid(cur)) {
                filaBFS.push(cur);
                chess[cur.second][cur.first] = chess[pos.second][pos.first]+1;
                if(cur.first == (int)xf- (int)'a' and cur.second == (int)yf - (int)'1') return chess[cur.second][cur.first];
            }
        }
    }

    return -1;
}

int main(){_
    int m; cin>>m;
    while(m--){
        cin>>x>>y>>xf>>yf;
        memset(chess, 0, sizeof chess);
        cout<<bfs({(int)x-(int)'a',(int)y-(int)'1'})-1<<endl;
    }
    exit(0);
}