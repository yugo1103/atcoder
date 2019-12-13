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

    vector<pair<ll, ll>> q[n];
    rep(i, 0, n){
        ll a;
        cin >> a;
        rep(j, 0, a){
            pair<ll, ll> tmp;
            cin >> tmp.first >> tmp.second;
            tmp.first--;
            q[i].push_back(tmp);
        }
    }

    ll ans = 0;
    for(int bit = 0; bit < (1 << n); bit++){
        bool flag = true;
        ll num = 0;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                num++;
                fore(x, q[i]){
                    if(bool(bit & (1 << x.first)) != bool(x.second)){
                        flag = false;
                        break;
                    }
                }
            }
            if(!flag)break;
        }
        if(flag){
            ans = max(ans, num);
        }
    }
    cout << ans << endl;
    return 0;
}
