#include <iostream>

int main (){
    int n,m,a;

    std::cin>>n>>m>>a;

    int com = float(n)/a != n/a ? (n / a) + 1 : (n / a);
    int lar = float(m)/a != m/a ? (m / a) + 1 : (m / a);

    printf("%.0f \n", double(com)*double(lar));
}