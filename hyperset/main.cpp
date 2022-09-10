#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

// 3xE = 207 -> 69
// 3xT = 252 -> 84
// 3xS = 249 -> 83
// 1C  = 236

int main(){_
    int qtd,len, cont=0; cin>>qtd>>len;
    string cards[qtd], aux;
    map<string,int> cardV;

    for(int i=0; i<qtd; i++){
        cin>>cards[i];
        cardV[cards[i]] = 1;
    }

    vector<int> index;
    for(int i=0; i<qtd; i++){
        for(int j=i+1; j<qtd; j++){    
            aux = "";   
            for(int z=0; z<len; z++){
                if(cards[i][z] == cards[j][z]) aux+=cards[j][z];
                else if(cards[i][z] != 'T' && cards[j][z] != 'T') aux+='T';
                else if(cards[i][z] != 'S' && cards[j][z] != 'S') aux+='S';
                else aux+='E';
            }
            if(cardV[aux]) {cont++;}
        }
    }

    cout<<cont/3<<endl;
    exit(0);
}