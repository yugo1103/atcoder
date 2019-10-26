#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n], b[n], c[n];
    rep(i, n){
        cin >> a[i] >> b[i] >> c[i];
    }

    ll dp[n][3];
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    for(int i = 1; i < n; i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + b[i];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c[i];
    }

    cout << max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])) << endl;
    return 0;
}
