#include <iostream>

int main(){
    int qtdProlems;
    std::cin>>qtdProlems;

    int cont = 0;
    int solved = 0;
    int prob[3];

    for(int i=0; i<qtdProlems; i++){
        std::cin>>prob[0]>>prob[1]>>prob[2];

        if (prob[0]==1) cont++;
        if (prob[1]==1) cont++;
        if (prob[2]==1) cont++;

        if(cont>=2) solved++;
        cont = 0;
    }

    std::cout<<solved<<std::endl;
}