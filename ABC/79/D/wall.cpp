#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

#define MAX_V 10
#define INF 1000000000

//ダイクストラ法
//計算量O(|V|^2)
int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];
int V;

void dijkstra(int s){
    fill(d, d + V, INF);
    fill(used, used + V, false);
    d[s] = 0;

    while(true){
        int v = -1;
        for(int u = 0; u < V; u++){
            if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
        }
        if(v == -1) break;
        used[v] = true;

        for(int u = 0; u < V; u++){
            d[u] = min(d[u], d[v] + cost[v][u]);
        }
    }
}

int main(void){
    ll h, w;
    cin >> h >> w;

    V = 10;

    rep(i, 0, 10){
        rep(j, 0, 10){
            cin >> cost[j][i];
        }
    }

    dijkstra(1);

    ll sum = 0;
    rep(i, 0, h){
        rep(j, 0, w){
            ll tmp;
            cin >> tmp;
            if(tmp != -1){
                sum += d[tmp];
            }
        }
    }

    cout << sum << endl;
    return 0;

}
