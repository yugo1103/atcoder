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
    ll count = 1;
    rep(i, 0, n){
        if(a[i] == count){
            count++;
        }else{
            ans++;
        }
    }

    if(count == 1){
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}
