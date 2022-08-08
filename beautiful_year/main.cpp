#include<iostream>

int main() {

    int year;
    std::cin>>year;

    int pos[4];
    while(true){

        year += 1;
        pos[0] = year / 1000;
        pos[1] = year / 100 % 10;
        pos[2] = year / 10 % 10;
        pos[3] = year % 10;

        if(pos[0]!=pos[1] && pos[0]!=pos[2] && pos[0]!=pos[3] && pos[1]!=pos[2] && pos[1]!=pos[3] && pos[2]!=pos[3]){
            break;
        }
    }

    std::cout<<year<<std::endl;
    return 0;
}