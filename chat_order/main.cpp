#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

int main(){_
    int n; cin>>n;
    string aux;
    stack<string> data;
    map<string,int> filt;

    for(int i=n-1; i>-1; i--){cin>>aux; data.push(aux);}
    
    while(!data.empty()){
        if(! filt[data.top()]){filt[data.top()] = 1;cout<<data.top()<<endl;} data.pop();
    }
}