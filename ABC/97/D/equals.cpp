#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

#define MAX_N 100005

//Union-Find木
int par[MAX_N]; //親
int r[MAX_N]; //木の深さ

//n要素で初期化
void init(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        r[i] = 0;
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

    if(r[x] < r[y]){
        par[x] = y;
    }else{
        par[y] = x;
        if(r[x] == r[y]) r[x]++;
    }
}

//xとyが同じ集合に属するか否か
bool same(int x, int y){
    return find(x) == find(y);
}

int main(void){
    ll n, m;
    cin >> n >> m;

    ll p[n];
    rep(i, 0, n){
        cin >> p[i];
        p[i]--;
    }

    init(n);
    rep(i, 0, m){
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        tmp1--;
        tmp2--;
        unit(p[tmp1], p[tmp2]);
    }

    ll ans = 0;
    rep(i, 0, n){
        if(same(i, p[i])){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
