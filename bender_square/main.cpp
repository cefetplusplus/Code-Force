#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=1,res=0, z=0,n,x,y,c;
    cin>>n>>x>>y>>c;
    while(sum<c){
        res++;
        z   =  min(x-1,res);
        sum += max(1+z-max((y+res-n), 0), 0) + max(1+z-max((res-y+1), 0), 0) - (z==res);
        z   =  min(n-x,res);
        sum += max(1+z-max((y+res-n), 1), 0) + max(1+z-max((res-y+1), 1), 0) - (z==res);
    }
    cout<<res<<endl;
}   