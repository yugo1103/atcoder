#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll ans[10];

int main(void){
    ll h, w, n;
    cin >> h >> w;
    cin >> n;

    map<pair<ll, ll>, ll> x;
    rep(i, 0, n){
        pair<ll, ll> t;
        cin >> t.first >> t.second;
        t.first--;
        t.second--;
        rep(i, 0, 3){
            rep(j, 0, 3){
                if(t.first - i < 0 || t.second - j < 0 || h - t.first + i < 3 || w - t.second + j < 3) continue;
                x[pair<ll,ll>(t.first - i, t.second - j)]++;
            }
        }
    }

    ll sum = 0;
    fore(a, x){
        ans[a.second]++;
    }

    rep(i, 1, 10){
        sum += ans[i];
    }

    ans[0] = (h - 2) * (w - 2) - sum;
    rep(i, 0, 10){
        cout << ans[i] << endl;
    }

    return 0;
}
