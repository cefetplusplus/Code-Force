#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

bool sortFunction(pair<int,int> v1, pair<int,int> v2){
    if(v1.first > v2.first) return true;
    if(v1.first == v2.first && v1.second > v2.second) return true;
    return false;
}

int main(){_
    int n, currentX, currentY, befX, befY, res; cin>>n;
    cin.ignore();

    string directions;
    vector<pair<int,int>> format(2);
    set<vector<pair<int,int>>> path;

    for(int i=0; i<n; i++){
        cin>>directions;
        currentX = 0; currentY = 0; res =0;
        path.clear();

        for(auto j:directions){
            befX = currentX; befY = currentY;
            if(j == 'N') currentY++;
            else if(j == 'S')currentY--;
            else if(j == 'W')currentX++;
            else currentX--;

            format = {{befX,befY}, {currentX,currentY}};

            sort(format.begin(),format.end(), sortFunction);
            
            if(!path.count(format)){res += 5; path.insert(format);} 
            else res++;
        }
        cout<<res<<endl;
    }
}