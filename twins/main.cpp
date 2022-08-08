#include <bits/stdc++.h>

//Função que faz a troca de dois elementos do vetor
void swap(int *v1, int *v2)
{
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}

void partition(int *v, int p, int r, int *i, int *j)
{
    int pivo;
    int idx = (p+r)/2;
    *i = p;
    *j = r;
    pivo = v[idx];

    do{
        while(v[*i] < pivo && *i < r)
            *i = *i +1;
        while(v[*j] > pivo && *j >p)
            *j = *j - 1;
        if(*i<=*j){
            swap(&v[*i], &v[*j]);
            *i = *i + 1;
            *j = *j - 1;
        }
    }while(*i<=*j);
}
void quickSort(int *v, int p, int r, int i, int j)
{
    partition(v,p,r, &i, &j);
    if(j > p){
        quickSort(v,p,j,i,j);
    }
    if(i < r){
        quickSort(v,i,r,i,j);
    }
}

int main(){
    int qtd, sum=0, res=0; std::cin>>qtd;

    int *vec = new int[qtd];
    for(int i=0; i<qtd; i++){
        std::cin>>vec[i];
        sum += vec[i];
    }

    quickSort(vec, 0, qtd-1, 0, 0);

    for(int i=qtd-1; i>=0; i--){
        res += vec[i];
        if(res>(sum/2)){
            std::cout<<qtd-i<<std::endl;
            return 0;
        }
    } 
    return 0;   
}