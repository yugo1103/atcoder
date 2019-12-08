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

    ll ans = 0;
    rep(i, 0, n - 1){
        if(a[i] % 2 == 0){
            ans += a[i] / 2;
        }else{
            if(a[i + 1] != 0){
                ans += a[i] / 2 + 1;
                a[i + 1]--;
            }else{
                ans += a[i] / 2;
            }
        }
    }

    ans += a[n - 1] / 2;
    cout << ans << endl;
    return 0;
}
