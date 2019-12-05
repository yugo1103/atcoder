#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MAX_V 104

ll d[MAX_V][MAX_V]; //d[u][v]は辺e=(u,v)のコスト(存在しない場合はINF,d[i][i]=0)
ll V; //頂点数
ll nex[MAX_V][MAX_V]; //iからjへの最短経路におけるiの1つ後の点

ll path[MAX_V][MAX_V];

void warshall_floyd(){
    rep(i, 0, V){
        rep(j, 0, V){
            nex[i][j] = j;
        }
    }
    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++){
                if(d[i][k] + d[k][j] < d[i][j]){
                    d[i][j] = d[i][k] + d[k][j];
                    nex[i][j] = nex[i][k];
                }
            }
}

void print_path(int start, int goal){
    for(int cur = start; cur != goal; cur = nex[cur][goal]){
        path[cur][nex[cur][goal]] = 1;
        path[nex[cur][goal]][cur] = 1;
    }
}

int main(void){
    ll n, m;
    cin >> n >> m;

    V = n;

    rep(i, 0, V){
        rep(j, 0, V){
            path[i][j] = -1;
            if(i == j){
                d[i][j] = 0;
            }else{
                d[i][j] = 100000000;
            }
        }
    }

    rep(i, 0, m){
        ll a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        d[a][b] = c;
        d[b][a] = c;
        path[a][b] = 0;
    }

    warshall_floyd();
    rep(i, 0, V){
        rep(j, 0, V){
            print_path(i, j);
        }
    }

    ll sum = 0;
    rep(i, 0, V){
        rep(j, 0, V){
            if(path[i][j] == 0){
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;

}
