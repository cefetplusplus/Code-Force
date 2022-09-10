#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

typedef long long ll;

string t,p;
int vec[200000];

bool valid(int m){
    int cont=0;
    for(int i=0; i<t.size(); i++){
        if(t[i] == p[cont] && vec[i] > m) cont++;
    }
    if(cont >= p.size()) return true;
    return false;
}

int main(){_
    cin>>t>>p;
    int aux = 0;

    for(int i=0; i<t.size(); i++){
        cin>>aux;
        vec[aux-1] = i;
    }

    int s=0, e=t.size(), m;

    while(e>s){
        m = (s+e)/2;                                                                   
        if(valid(m)) s = m+1;
        else e = m;
    }

    cout<<e<<endl;

    exit(0);
}
