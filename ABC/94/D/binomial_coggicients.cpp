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
    ll ma = 0;
    rep(i, 0, n){
        cin >> a[i];
        ma = max(ma, a[i]);
    }

    ll ans = -100000000000;
    rep(i, 0, n){
        if(a[i] == ma){
            continue;
        }else{
            if(abs(ma / 2.0 - a[i]) < abs(ma / 2.0 - ans)){
                ans = a[i];
            }
        }
    }

    cout << ma << " " << ans << endl;
    return 0;
}
