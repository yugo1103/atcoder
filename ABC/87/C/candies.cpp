#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int a[2][n];
    ll count = 0;
    rep(i, 2){
        rep(j, n){
            cin >> a[i][j];
        }
    }

    ll b[2][n+1];

    b[0][n-1] = a[0][n-1] + a[1][n-1];
    b[1][n-1] = a[1][n-1];

    for(int i = n-1; i > 0; i--){
        b[1][i-1] = a[1][i-1] + b[1][i];
        b[0][i-1] = max(b[0][i], b[1][i-1]) + a[0][i-1];
    }


    cout << b[0][0] << endl;
    return 0;




}
