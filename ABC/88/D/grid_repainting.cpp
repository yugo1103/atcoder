#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

#define INF 1000000000
#define MAX_V 2503
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


    char s[h][w];
    ll kuro_num = 0;

    rep(i, 0, h){
        rep(j, 0, w){
            cin >> s[i][j];
            if(s[i][j] == '#'){
                kuro_num++;
            }
        }
    }

    rep(i, 0, h * w){
        rep(j, 0, h * w){
            if(i == j) cost[i][j] = 0;
            else cost[i][j] = INF;
        }
    }

    rep(i, 0, h){
        rep(j, 0, w){
            if(s[i][j] == '.'){
                if(i > 0 && s[i-1][j] == '.'){
                    cost[i * w + j][(i-1) * w + j] = 1;
                }
                if(i < h-1 && s[i+1][j] == '.'){
                    cost[i * w + j][(i+1) * w + j] = 1;
                }
                if(j > 0 && s[i][j-1] == '.'){
                    cost[i * w + j][i * w + j - 1] = 1;
                }
                if(j < w-1 && s[i][j+1] == '.'){
                    cost[i * w + j][i * w + j + 1] = 1;
                }
            }
        }
    }


    V = h * w;
    dijkstra(0);
    if(d[V-1] >= 1000000000){
        cout << -1 << endl;
    }else{
        cout << V - (d[V-1] + 1) - kuro_num << endl;
    }
    return 0;
}
