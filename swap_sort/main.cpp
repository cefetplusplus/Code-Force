#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
 
typedef long long ll;
int cont = 0;

int min(vector<ll> vec, int begin){
    ll min = vec[begin];
    int position = begin;
    for(int i=begin; i<vec.size(); i++){
        if(min > vec[i]){
            min = vec[i];
            position = i;
        }
    }
    return position;
}

void swap(ll *v1, ll *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}

int main(){_
    int n; cin>>n;
    vector<ll> vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int i=0, index = 0;
    vector<pair<int,int>> res;

    while(i<vec.size()-1){
        index = min(vec, i);
        if(index != i){
            swap(&vec[i], &vec[index]);
            res.push_back({i,index});
        }
        i++;
    }

    cout<<res.size()<<endl;
    for(auto i:res){
        cout<<i.first<<" "<<i.second<<endl;
    }

    exit(0);
}
