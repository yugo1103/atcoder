#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll h, n;
    cin >> h >> n;

    ll a[n], b[n];
    rep(i, 0, n){
        cin >> a[i] >> b[i];
    }

    ll dp[10001];
    rep(i, 1, 10001){
        dp[i] = 1000000000;
    }
    dp[0] = 0;

    ll mi = 1000000000;
    rep(i, 0, h + 1){
        rep(j, 0, n){
            if(i + a[j] >= h){
                mi = min(mi, dp[i] + b[j]);
            }else{
                dp[i + a[j]] = min(dp[i + a[j]], dp[i] + b[j]);
            }
        }
    }

    cout << mi << endl;
    return 0;
}
