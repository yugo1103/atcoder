#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, W;
    cin >> n >> W;

    ll w[n], v[n];
    rep(i, n){
        cin >> w[i] >> v[i];
    }

    ll dp[n+1][100001];
    fill(dp[0], dp[0] + 100001, 10000000000);
    dp[0][0] = 0;
    int ma = 0;
    rep(i, n){
        rep(j, 100001){
            if(j >= v[i]){
                dp[i+1][j] = min(dp[i][j], dp[i][j-v[i]] + w[i]);
            }else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }
    rep(i, 100001){
        if(dp[n][i] <= W)
            ma = max(ma, i);
    }

    cout << ma << endl;

}
