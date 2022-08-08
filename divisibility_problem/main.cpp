#include <bits/stdc++.h>

int main(){
    int t;
    long long a,b,qtd;

    std::cin>>t;
    for(int i=0; i<t; i++){
        qtd = 0;
        std::cin>>a>>b;
        if(a%b != 0) qtd = b - a%b;
        std::cout<<qtd<<std::endl;
    }
}