#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
vector<pair<ll, ll>> node[100002];
ll cost[100002];
ll check[100002];
void dfs(ll k, ll prev){
    if(check[k] == 1){
        return;
    }
    check[k] = 1;
    cost[k] = prev;

    fore(a, node[k]){
        dfs(a.first, cost[k] + a.second);
    }
}

int main(void){
    ll n;
    cin >> n;

    ll a[n], b[n], c[n];
    rep(i, 0, n - 1){
        cin >> a[i] >> b[i] >> c[i];
        a[i]--;
        b[i]--;
        node[a[i]].push_back(pair<ll, ll>(b[i], c[i]));
        node[b[i]].push_back(pair<ll, ll>(a[i], c[i]));
    }


    ll q, k;
    cin >> q >> k;
    k--;
    ll x[q], y[q];
    rep(i, 0, q){
        cin >> x[i] >> y[i];
        x[i]--;
        y[i]--;
    }

    dfs(k, 0);

    rep(i, 0, q){
        cout << cost[x[i]] + cost[y[i]] << endl;
    }
}
