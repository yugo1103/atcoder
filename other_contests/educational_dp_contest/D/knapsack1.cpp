#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll N, W;
    cin >> N >> W;

    ll w[N], v[N];
    rep(i, N){
        cin >> w[i] >> v[i];
    }

    ll dp[N][W+1];
    rep(i, N){
        rep(j, W+1){
            if(i == 0){
                if(j >= w[i]){
                    dp[i][j] = v[i];
                }else{
                    dp[i][j] = 0;
                }
            }else if(j < w[i]){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
    }

    cout << dp[N-1][W] << endl;
    return 0;
}
