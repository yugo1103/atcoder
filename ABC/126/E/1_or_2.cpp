#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MAX_N 100003

//Union-Find木
int par[MAX_N]; //親
int ran[MAX_N]; //木の深さ

//n要素で初期化
void init(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        ran[i] = 0;
    }
}

//木の根を求める
int find(int x){
    if(par[x] == x){
        return x;
    }else{
        return par[x] = find(par[x]);
    }
}

//xとyの属する集合を併合
void unit(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(ran[x] < ran[y]){
        par[x] = y;
    }else{
        par[y] = x;
        if(ran[x] == ran[y]) ran[x]++;
    }
}

//xとyが同じ集合に属するか否か
bool same(int x, int y){
    return find(x) == find(y);
}
int main(void){
    ll n, m;
    cin >> n >> m;

    init(n);
    rep(i, 0, m){
        ll t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        unit(t1, t2);
    }

    map<ll, ll> ans;
    rep(i, 0, n){
        ans[find(i)]++;
    }

    cout << ans.size() << endl;
    return 0;
}
