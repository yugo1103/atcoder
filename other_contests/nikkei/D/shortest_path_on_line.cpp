#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define INF 10000000000
#define MAX_V 100005

ll cost[MAX_V][MAX_V];
ll d[MAX_V]; //頂点sからの最短経路
bool used[MAX_V];
ll V;

void dijkstra(ll s){
    fill(d, d + V, INF);
    fill(used, used + V, false);
    d[s] = 0;

    while(true){
        ll v = -1;
        for(ll u = 0; u < V; u++){
            if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
        }
        if(v == -1) break;
        used[v] = true;

        for(ll u = 0; u < V; u++){
            d[u] = min(d[u], d[v] + cost[v][u]);
        }
    }
}
int main(void){
    ll n, m;
    cin >> n >> m;

    V = n;

    rep(i, 0, n){
        rep(j, 0, n){
            cost[i][j] = INF;
        }
    }
    rep(i, 0, m){
        ll t1, t2, c;
        cin >> t1 >> t2 >> c;
        t1--, t2--;
        rep(j, t1, t2+1){
            rrep(k, t2, t1){
                cost[j][k] = min(cost[j][k], c);
                cost[k][j] = min(cost[k][j], c);
            }
        }
    }

    dijkstra(0);
    if(d[n-1] == INF){
        cout << -1 << endl;
    }else{
        cout << d[n-1] << endl;
    }

    return 0;
}
