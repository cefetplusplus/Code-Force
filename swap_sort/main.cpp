#include <bits/stdc++.h>

typedef struct{
    int n1;
    int n2;
} swaps;

long long contSwap = 0;
swaps *trocas;

// Realiza a troca de posições do vetor
template <class tp>
void swap(tp *v1, tp *v2, int idx1, int idx2){
    tp aux = *v1;
    *v1 = *v2;
    *v2 = aux; 
    if(idx1 != idx2 && *v1 != *v2){
        trocas[contSwap].n1 = idx1;
        trocas[contSwap].n2 = idx2; 
        contSwap++; 
    }
}

template <class tp>
int partition(tp *vec, int start, int end){
    int arrow_left = start-1;
    int arrow_right = start;
    int index_pivot = (start+end)/2;
    tp pivot = vec[index_pivot];

    while(arrow_right <= end){ 
        if(vec[arrow_right] < pivot){
            swap(&vec[arrow_left + 1], &vec[arrow_right], arrow_left + 1, arrow_right);
            arrow_left++;
        } 
        if(vec[arrow_right] == pivot){
            index_pivot = arrow_right;
        }
        arrow_right++;
    }

    arrow_left++;
    swap(&vec[arrow_left], &vec[index_pivot], arrow_left, index_pivot);

    return arrow_left;
}

template <class tp>
void quickSort(tp *vec, int start, int end){
    if(start<end){
        int index_pivot =  partition(vec, start, end);
        quickSort(vec,start,index_pivot-1);
        quickSort(vec,index_pivot+1,end);
    }
}

int main(){
    int n; std::cin>>n;
    long long *vec = new long long[n];

    // int vec[] = {9,2,6,1,8,3};
    // int n = 6;

    for(int i=0; i<n; i++){
        std::cin>>vec[i];
    }

    trocas = new swaps[n*n];

    quickSort(vec, 0, n-1);

    std::cout<<contSwap<<std::endl;
    for(int i=0; i<contSwap; i++){
        std::cout<<trocas[i].n1<<" "<<trocas[i].n2<<std::endl;
    }
}