#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)
#define INF 1000000000;

int main(void){
    ll n, m, l;
    cin >> n >> m >> l;
    ll cost[n + 5][n + 5];
    rep(i, n){
        rep(j, n){
            if(i == j){
                cost[i][j] = 0;
            }else{
                cost[i][j] = INF;
            }
        }
    }

    rep(i, m){
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2 >> cost[tmp1-1][tmp2-1];
        cost[tmp2-1][tmp1-1] = cost[tmp1-1][tmp2-1];
    }

    ll q;
    cin >> q;
    pair<ll, ll> ans[q];
    rep(i, q){
        cin >> ans[i].first >> ans[i].second;
        ans[i].first--;
        ans[i].second--;
    }

    rep(k, n)
        rep(i, n)
            rep(j, n){
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
                cost[j][i] = cost[i][j];
            }


    ll cost2[n + 5][n + 5];
    rep(i, n)
        rep(j, n){
            if(cost[i][j] <= l){
                cost2[i][j] = 1;
            }else{
                cost2[i][j] = INF;
            }
        }

    rep(k, n)
        rep(i, n)
            rep(j, n){
                cost2[i][j] = min(cost2[i][j], cost2[i][k] + cost2[k][j]);
                cost2[j][i] = cost2[i][j];
            }

    rep(i, q){
        if(cost2[ans[i].first][ans[i].second] < 1000000000){
            cout << (cost2[ans[i].first][ans[i].second]) - 1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
