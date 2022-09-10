#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef long long ll;

int binarySearch(vector<int> vec, int l, int r){
    int begin = lower_bound(vec.begin(), vec.end(), l) - vec.begin();
    int end = upper_bound(vec.begin(), vec.end(), r) - vec.begin(); 
    return end - begin;
}

int main(){_
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    int k, l, r; cin>>k;
    for(int i=0; i<k; i++){
        cin>>l>>r;
        cout<<binarySearch(a,l,r)<<" ";
    }
    cout<<endl;

}