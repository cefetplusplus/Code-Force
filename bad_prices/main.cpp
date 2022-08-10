#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3b3b3b3b;

typedef long long ll;

int main(){_
    int qtd, n, cont, minV; cin>>n;

    for(int i=0; i<n; i++){
        cin>>qtd;
        vector<int> vec(qtd);
        for(int j=0; j<qtd; j++) cin>>vec[j];

        minV = vec[qtd-1]; cont = 0;
        for(int j=qtd-2; j>-1; j--) {
            if(vec[j]>minV) cont++;
            minV = min(vec[j], minV);
        }
        cout<<cont<<endl;
    }
    exit(0);
}