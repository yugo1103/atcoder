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

    ll x[n];
    rep(i, 0, n){
        cin >> x[i];
    }

    ll ans = 10000000000;
    rep(i, 1, 101){
        ll cost = 0;
        rep(j, 0, n){
            cost += pow(x[j] - i, 2);
        }

        ans = min(ans, cost);
    }

    cout << ans << endl;
}
