#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

int main(){_
    int r, w, s, sum=0, gap, max, step=0, aux, ness; cin>>r>>w>>s;
    int river[r], wood[w];
    bool result = true;

    for(int i=0; i<w; i++){
        cin>>wood[i];
        sum += wood[i];
    }

    aux = s>1 ? 0 : 1;
    
    for(int i=0; i<r; i++){
        gap = r-i-aux;
        if(wood[step] <= 0 && step<w) step++;
        ness = sum+(w-step-1);
        if(gap > ness && (ness > -1 || i+s-1 >= r)){
            max = gap-s>ness ? i+s-1 : i+(gap-ness);
            while(i < max && i < r){
                river[i] = 0;
                i++;
            }
            while(wood[step]-- && i < r){
                river[i] = step+1;
                sum--;
                i++;
            }
            i--;
        } else if (step<w){
            river[i] = step+1;
            wood[step]--;
            sum--;
        } else {result = false; break;};
    }
    if(result){
        cout<<"YES"<<endl; 
        for(int i=0; i<r; i++){
            cout<<river[i]<<" ";
        }
        cout<<endl;
        exit(0);
    }
    cout<<"NO"<<endl; exit(0);
}