#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 1000;
int parent, child;
int n, m, a, b, k, j, i;


int main(){

    cin >> n >> m >> a >> b;

    int** G = new int*[n+1];
    for (i = 0; i <= n; ++i) {
        G[i] = new int[n+1];
        for (int j = 0; j <= n; ++j) {
            G[i][j] = (i == j ? 0 : INF);
        }
    }

    while (m--) {
        cin >> parent >> child;
        G[parent][child] = 1;
    }

    int** D = new int*[n+1];
    for (i = 0; i <= n; ++i) {
        D[i] = new int[n+1];
        for (j = 0; j <= n; ++j) {
            D[i][j] = G[i][j];
        }
    }

    for (k = 0; k <= n; ++k) {
        for (i = 0; i <= n; ++i) {
            for (j = 0; j <= n; ++j) {
                if (D[i][k] + D[k][j] < D[i][j]) {
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }

    int best_cost = INF;
    for (i = 0; i <= n; ++i) {
        if (D[0][i] + D[i][a] + D[i][b] < best_cost) {
            best_cost = D[0][i] + D[i][a] + D[i][b];
        }
    }

    for (i = 0; i <= n; ++i){
        delete [] G[i];
        delete [] D[i];
    }
    delete [] G;
    delete [] D;

    cout << best_cost << endl;

    exit(0);
}



/*

6 7 6 4
0 1
4 0
1 2 
3 4
2 5
5 6
6 3

8 10 7 6
0 1
0 3
1 4
4 3
4 2
2 1
4 6
4 5
5 7
7 8

4 5 3 4
0 1
1 3
0 2
2 4
1 4

12 14 9 11
0 1
1 4
4 7
7 10
10 11
0 2
2 5
5 8
5 12
8 10
0 3
3 6
6 9
12 9

*/