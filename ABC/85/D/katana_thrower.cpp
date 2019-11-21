#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, h;
    cin >> n >> h;

    pair<ll, ll> d[n * 2];

    rep(i, 0, n * 2){
        cin >> d[i].first;
        if(i % 2 == 0){
            d[i].second = 0;
        }else{
            d[i].second = 1;
        }
    }

    sort(d, d + 2 * n, greater<pair<ll, ll>>());

    ll ans = 0;
    rep(i, 0, n * 2){
        if(d[i].second == 1){
            h -= d[i].first;
            ans++;
        }else{
            ans += ceil(h / double(d[i].first));
            break;
        }

        if(h <= 0){
            break;
        }
    }

    cout << ans << endl;
}
