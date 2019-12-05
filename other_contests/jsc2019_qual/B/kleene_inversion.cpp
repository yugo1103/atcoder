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

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }


    ll ans = 0;
    rep(i, 0, n){
        ll c1 = 0;
        ll c2 = 0;
        rep(j, i + 1, n){
            if(a[j] < a[i]){
                c1++;
            }
        }
        rrep(j, i - 1, 0){
            if(a[j] < a[i]){
                c2++;
            }
        }
        c1 *= k;
        c1 %= 1000000007;
        c2 *= (k - 1);
        c2 %= 1000000007;
        ans += c1 * (k + 1) / 2 % 1000000007;
        ans += c2 * k / 2 % 1000000007;
        ans %= 1000000007;
    }
    cout << ans << endl;
    return 0;
}
