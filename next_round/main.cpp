#include <iostream>

int main(){
    int qtd, pos, cont=0;

    std::cin>>qtd>>pos;
    int *val = new int[qtd];
    
    for(int i = 0; i<qtd; i++){
        std::cin>>val[i];
    }

    for(int i=0; i<qtd; i++){
        if(val[i] >= val[pos-1] && val[i] > 0){
            cont++;
        }
    }

    printf("%d \n", cont);

    delete[] val;
    return 0;
}