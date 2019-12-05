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

    ll d[k];
    rep(i, 0, k){
        cin >> d[i];
    }

    ll ans;
    rep(i, n, 10000000){
        string t = to_string(i);
        ll flag = true;
        rep(j, 0, t.size()){
            rep(l, 0, k){
                if(t[j] == to_string(d[l])[0]) flag = false;
            }
        }

        ans = i;
        if(flag) break;
    }
    cout << ans << endl;
    return 0;
}
