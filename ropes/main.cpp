#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int vec[10000];
int n,k;

bool valid(double m){
    int cont = 0; 
    for(int i=0; i<n; i++){    
        cont += vec[i]/m;   
    }
    if(cont >= k)return true;
    return false;
}

int main(){_
    cout<<fixed<<setprecision(6);
    cin>>n>>k;
    
    for(int i=0; i<n; i++)cin>>vec[i];

    double b = 0, l = 1e7 + 10, m, eps = 1e-6;
    

    while(l-b > eps){
        m = (b+l)/2;
        if(valid(m)) b = m;
        else l = m;
    }

    cout<<(l+b)/2<<endl;
}