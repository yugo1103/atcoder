#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;
    cin >> n >> k;

    ll p[n];
    rep(i, 0, n){
        cin >> p[i];
    }

    ld ans = 0;
    ld ma = 0;
    rep(i, 0, k){
        ans += (p[i] + 1);
        ma = ans;
    }

    rep(i, k, n){
        ans += (p[i] + 1);
        ans -= (p[i - k] + 1);
        ma = max(ma, ans);
    }

    printf("%.9Lf", ma / ld(2.0));
    return 0;
}
