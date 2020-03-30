#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MAX_V 20
#define INF 10000000

//ワーシャル-フロイド法(全点対最短経路問題)
//全ての2頂点間の最短路を求める
//計算量O(|V|^3)
int d[MAX_V][MAX_V]; //d[u][v]は辺e=(u,v)のコスト(存在しない場合はINF,d[i][i]=0)
int V; //頂点数

void warshall_floyd(){
    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main(void){
    ll n, m;
    cin >> n >> m;

    rep(i, 0, MAX_V){
        rep(j, 0, MAX_V){
            if(i == j){
                d[i][j] = 0;
            }else{
                d[i][j] = INF;
            }
        }
    }

    V = n;
    rep(i, 0, m){
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        d[a][b] = 1;
        d[b][a] = 1;
    }

    warshall_floyd();

    rep(i, 0, n){
        ll count = 0;
        rep(j, 0, n){
            if(d[i][j] == 2){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
