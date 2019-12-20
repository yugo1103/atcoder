#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, t;
    cin >> n >> t;

    pair<ll, ll> a[n];
    rep(i, 0, n){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);

    ll dp[n + 1][t + 1];
    dp[0][0] = 0;
    ll sum = 0;

    rep(i, 0, t + 1){
        dp[0][i] = 0;
    }

    rep(i, 1, n + 1){
        rep(j, 0, t){
            if(j - a[i - 1].first < 0){
                dp[i][j] = dp[i - 1][j];
                sum = max(sum, dp[i][j] + a[i - 1].second);
            }else{
                sum = max(sum, dp[i - 1][j] + a[i - 1].second);
                if(dp[i - 1][j - a[i - 1].first] + a[i - 1].second <= dp[i - 1][j]){
                dp[i][j] = dp[i - 1][j];
                }else{
                dp[i][j] = dp[i - 1][j - a[i - 1].first] + a[i - 1].second;
                }
            }
        }
    }
    cout << sum << endl;

    return 0;
}
