#include<bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f;

int32_t main(){ _
    string codificada, result;cin >> codificada;
    int linhas,count=0,linhaAtual=1,x=1;cin>>linhas;
    bool inverte=true;
    result=codificada;
    if (linhas>1){
        for (int i = 1; i < codificada.size(); i++){
            if (linhaAtual>1&&linhaAtual<linhas){
                if (inverte){
                    x=linhaAtual;
                    inverte=false;
                }
                else{
                    x=linhas-linhaAtual+1;
                    inverte=true;
                }
            }
            if(linhas%2==1&&linhaAtual==((linhas+1)/2))
                x=linhaAtual;
            count=count+(2*(linhas-x));
            if (count>(codificada.size()-1)){
                count=linhaAtual;
                linhaAtual++;
                inverte=true;
                if(linhaAtual==linhas)
                    x=1;
            }
            result[count]=codificada[i];
        }
    }
    cout << result;
	return 0;
}