#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, d, k;
    cin >> n >> d >> k;

    pair<ll, ll> m[d];
    pair<ll, ll> p[k];
    ll ans[k];

    rep(i, 0, d){
        cin >> m[i].first >> m[i].second;
        m[i].first--;
        m[i].second--;
    }

    rep(i, 0, k){
        cin >> p[i].first >> p[i].second;
        p[i].first--;
        p[i].second--;
    }

    rep(i, 0, d){
        rep(j, 0, k){
            if(p[j].first == p[j].second) continue;
            if(m[i].second >= p[j].first && p[j].first >= m[i].first){
                if(m[i].second >= p[j].second && p[j].second >= m[i].first){
                    p[j].first = p[j].second;
                    ans[j] = i + 1;
                }else if(p[j].second > m[i].second){
                    p[j].first = max(p[j].first, m[i].second);
                }else if(p[j].second < m[i].first){
                    p[j].first = min(p[j].first, m[i].first);
                }
            }
        }
    }

    rep(i, 0, k){
        cout << ans[i] << endl;
    }
    return 0;
}
