#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll h[n];
    rep(i, n){
        cin >> h[i];
    }

    ll dp[n];
    rep(i, n){
        if(i == 0){
            dp[i] = 0;
        }else if(i == 1){
            dp[i] = dp[i-1] + abs(h[i] - h[i-1]);
        }else{
            dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
        }
    }

    cout << dp[n-1] << endl;
    return 0;
}
