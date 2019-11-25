#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define INF 1000000000
#define MAX_V 300

//ワーシャル-フロイド法(全点対最短経路問題)
//全ての2頂点間の最短路を求める
//計算量O(|V|^3)
ll d[MAX_V][MAX_V]; //d[u][v]は辺e=(u,v)のコスト(存在しない場合はINF,d[i][i]=0)
int V; //頂点数

void warshall_floyd(){
    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main(void){
    ll n, m, r;
    cin >> n >> m >> r;

    ll ro[r];
    rep(i, 0, r){
        cin >> ro[i];
        ro[i]--;
    }

    V = n;

    rep(i, 0, n){
        rep(j, 0, n){
            d[i][j] = INF;
        }
    }
    rep(i, 0, m){
        ll ta, tb, tc;
        cin >> ta >> tb >> tc;
        ta--;
        tb--;
        d[ta][tb] = tc;
        d[tb][ta] = tc;
    }

    warshall_floyd();

    ll num = 1;
    ll tmp = r;
    while(tmp){
        num *= tmp;
        tmp--;
    }
    sort(ro, ro + r);

    ll ans = 100000000000;
    rep(i, 0, num){
        ll sum = 0;
        rep(j, 0, r - 1){
            sum += d[ro[j]][ro[j + 1]];
        }
        ans = min(ans, sum);
        next_permutation(ro, ro + r);
    }

    cout << ans << endl;
    return 0;
}
