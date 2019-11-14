#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll path[500][500];
int main(void){
    ll n, m, q;
    cin >> n >> m >> q;

    rep(i, 0, m){
        ll l, r;
        cin >> l >> r;
        path[l - 1][r - 1]++;
    }

    ll qu1[q], qu2[q];
    rep(i, 0, q){
        cin >> qu1[i] >> qu2[i];
        qu1[i]--;
        qu2[i]--;
    }

    ll sum_r[n][n];
    rep(i, 0, n){
        sum_r[i][0] = path[i][0];
        rep(j, 1, n){
            sum_r[i][j] = sum_r[i][j-1] + path[i][j];
        }
    }

    rep(i, 0, q){
        ll ans = 0;
        rep(j, qu1[i], qu2[i]+1){
            if(qu1[i] == 0){
                ans += sum_r[j][qu2[i]];
            }else{
                ans += sum_r[j][qu2[i]] - sum_r[j][qu1[i]-1];
            }
        }
        cout << ans << endl;
    }
}
