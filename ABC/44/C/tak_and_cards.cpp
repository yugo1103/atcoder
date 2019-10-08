#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

ll x[100];
ll check[60][60][3000];

ll dp(ll j, ll k, ll a){
    if(check[j][k][a] != -1){
        return check[j][k][a];
    }

    if(j == 0 && k == 0 && a == 0){
        check[j][k][a] = 1;
        return 1;
    }
    else if(j >= 1 && a < x[j - 1]){
        check[j][k][a] = dp(j - 1, k, a);
        return check[j][k][a];
    }
    else if(j >= 1 && k >= 1 && a >= x[j - 1]){
        check[j][k][a] = dp(j - 1, k, a) + dp(j - 1, k - 1, a - x[j - 1]);
        return check[j][k][a];
    }
    else
        check[j][k][a] = 0;
        return 0;
}

int main(void){
    ll n, a;
    cin >> n >> a;

    rep(i, 60)
        rep(j, 60)
            rep(k, 3000)
                check[i][j][k] = -1;

    rep(i, n){
        cin >> x[i];
    }

    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += dp(n, i, i * a);
    }

    cout << sum << endl;
    return 0;
}
