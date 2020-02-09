#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    ll dp[n + 2];
    rep(i, 0, n){
        dp[i] = 1000000000;
    }
    dp[0] = 0;

    rep(i, 0, n){
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(a[i] - a[i + 1]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(a[i] - a[i + 2]));
    }

    cout << dp[n - 1] << endl;
    return 0;
}
