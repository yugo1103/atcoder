#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll h, w, d;
    cin >> h >> w >> d;

    ll a[h][w];
    ll cost[h * w];
    pair<ll, ll> b[h * w];
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> a[i][j];
            a[i][j]--;
            b[a[i][j]].first = i;
            b[a[i][j]].second = j;
        }
    }

    ll q;
    cin >> q;
    ll l[q], r[q];
    rep(i, 0, q){
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }

    rep(i, 0, d){
        for(int j = i; j < h * w; j += d){
            if(j == i){
                cost[j] = 0;
            }else{
                cost[j] = cost[j - d] + abs(b[j].first - b[j - d].first) + abs(b[j].second - b[j - d].second);
            }
        }
    }

    rep(i, 0, q){
        cout << cost[r[i]] - cost[l[i]] << endl;
    }

    return 0;
}
