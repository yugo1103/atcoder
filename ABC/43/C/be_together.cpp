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
    ll sum = 0;
    rep(i, 0, n){
        cin >> a[i];
        sum += a[i];
    }

    ll x = round(sum / double(n));

    ll ans = 0;
    rep(i, 0, n){
        ans += pow(a[i] - x, 2);
    }
    cout << ans << endl;
    return 0;
}
