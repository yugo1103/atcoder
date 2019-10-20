#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

using Edge = pair<ll, ll>;
using Graph = vector<vector<Edge>>;
Graph G;

vector<bool> color;
void dfs(ll v, ll p, bool c){
    color[v] = c;
    for(auto e: G[v]){
        if(e.first == p) continue;
        if(e.second % 2 == 0){
            dfs(e.first, v, c);
        }else{
            dfs(e.first, v, !c);
        }
    }
}


int main(void){
    ll n;
    cin >> n;

    G.assign(n, vector<Edge>());
    color.assign(n, 0);

    rep(i, n-1){
        ll tmp1, tmp2, tmp3;
        cin >> tmp1 >> tmp2 >> tmp3;
        tmp1--;
        tmp2--;
        G[tmp1].push_back(Edge(tmp2, tmp3));
        G[tmp2].push_back(Edge(tmp1, tmp3));
    }

    dfs(0, -1, 0);

    rep(i, n){
        cout << color[i] << endl;
    }

    return 0;
}
