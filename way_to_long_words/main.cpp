#include <iostream>

int main(){
    int qtdLines;
    std::cin>>qtdLines;
    std::string *lines = new std::string[qtdLines];

    for(int i=0; i<qtdLines; i++){
        std::cin>>lines[i];
    }

    int length;
    for(int i=0; i<qtdLines; i++){
        length = lines[i].length();
        if(length > 10){
            std::cout<<lines[i][0]<<length-2<<lines[i][length-1]<<std::endl;
        }else{
            std::cout<<lines[i]<<std::endl;
        }
    }

    delete[] lines;
    return 0;
}