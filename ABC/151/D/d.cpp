#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MAX_V 401
#define INF 1000000000

ll d[MAX_V][MAX_V]; //d[u][v]は辺e=(u,v)のコスト(存在しない場合はINF,d[i][i]=0)
int V; //頂点数

void warshall_floyd(){
    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main(void){
    ll h, w;
    cin >> h >> w;

    V = h * w;

    rep(i, 0, MAX_V){
        rep(j, 0, MAX_V){
            d[i][j] = INF;
            if(i == j){
                d[i][j] = 0;
            }
        }
    }

    char mp[h][w];
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> mp[i][j];
        }
    }

    rep(i, 0, h){
        rep(j, 0, w){
            if(mp[i][j] == '.'){
                if(i != 0 && mp[i - 1][j] == '.'){
                    d[w * (i - 1)+ j][w * i + j] = 1;
                    d[w * i + j][w * (i - 1) + j] = 1;
                }
                if(i != h - 1 && mp[i + 1][j] == '.'){
                    d[w * (i + 1) + j][w * i + j] = 1;
                    d[w * i + j][w * (i + 1) + j] = 1;
                }
                if(j != 0 && mp[i][j - 1] == '.'){
                    d[w * i + j - 1][w * i + j] = 1;
                    d[w * i + j][w * i + j - 1] = 1;
                }
                if(j != w - 1 && mp[i][j + 1] == '.'){
                    d[w * i + j + 1][w * i + j] = 1;
                    d[w * i + j][w * i + j + 1] = 1;
                }
            }
        }
    }

    warshall_floyd();

    ll ans = 0;
    rep(i, 0, h){
        rep(j, 0, w){
            rep(k, 0, h){
                rep(l, 0, w){
                    if(d[w * i + j][w * k + l] < INF){
                        ans = max(ans, d[w * i + j][w * k + l]);
                    }
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}
