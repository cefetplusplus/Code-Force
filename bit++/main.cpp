#include <iostream>

int main(){
    int qtd, value=0;
    std::cin>>qtd;

    std::string opr;

    for(int i=0; i<qtd; i++){
        std::cin>>opr;
        if(opr.find("++") != std::string::npos){
            value++;
        } else {
            value--;
        }
    }

    std::cout<<value<<std::endl;
    return 0;
}