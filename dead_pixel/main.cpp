#include <bits/stdc++.h>

int main(){
    int t,a,b,x,y,line,col, res;
    std::cin>>t;

    for(int i=0; i<t; i++){
        std::cin>>a>>b>>x>>y;
        x++; y++;
        col  = a-x+1 > x ? a-x+1 : x; 
        line = b-y+1 > y ? b-y+1 : y; 

        res = (line-1)*a > (col-1)*b ?(line-1)*a : (col-1)*b;
        std::cout<<res<<std::endl;
    }
    return 0;
}