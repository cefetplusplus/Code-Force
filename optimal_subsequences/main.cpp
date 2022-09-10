#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fll;
 
bool comp(pair<int,ll> v1, pair<int,ll> v2){
    return v1.second > v2.second;
}
 
int main(){_ 
    int m,n; cin>>n;
    vector<pair<int,int>> elements(n);
    for(int i=0; i<n; i++){
        elements[i].first = i;
        cin>>elements[i].second;
    }
 
    cin>>m;
    map<int, map<int,int>> res;
    pair<int,int> k_pos[m];
    
    for(int i=0; i<m; i++){
        cin>>k_pos[i].first>>k_pos[i].second; 
        res[k_pos[i].first][k_pos[i].second] = 1;  
    }

    sort(elements.begin(), elements.end(), comp);
    for(auto& maps : res){
        sort(elements.begin(), elements.begin() + maps.first);
        for(auto& item : maps.second){
            item.second = elements[item.first-1].second;
        }
    }

    for(int i=0; i<m; i++){
        cout<< res[k_pos[i].first][k_pos[i].second]<<endl;
    }
 
    exit(0);
}