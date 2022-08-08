#include<iostream>

int main(){
    int w;
    std::cin>>w;

    w % 2 == 0 && w > 2 ? std::cout<<"YES"<<std::endl : std::cout<<"NO"<<std::endl;
    return 0;
}