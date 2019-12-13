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

    sort(a, a + n);

    ll b[n];
    b[0] = a[0];
    rep(i, 1, n){
        b[i] = a[i] + b[i - 1];
    }

    ll ans = n;
    rep(i, 0, n - 1){
        if(b[i] * 2 < a[i + 1]){
            ans = n - i - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
