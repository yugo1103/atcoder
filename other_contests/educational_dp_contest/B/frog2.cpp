#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    ll h[n];
    rep(i, n){
        cin >> h[i];
    }

    ll dp[n];
    rep(i, n){
        dp[i] = 10000000000;
        if(i == 0){
            dp[i] = 0;
        }else{
            for(int j = 1; j <= k; j++){
                if(i - j < 0) break;
                dp[i] = min(dp[i], dp[i-j] + abs(h[i] - h[i-j]));
            }
        }
    }

    cout << dp[n-1] << endl;
    return 0;
}
