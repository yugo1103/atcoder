#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

#define MAX_N 1000000

//Union-Find木
int par[MAX_N]; //親
int depth[MAX_N]; //木の深さ
int num[MAX_N];

//n要素で初期化
void init(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        depth[i] = 0;
        num[i] = 1;
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

    if(depth[x] < depth[y]){
        par[x] = y;
        num[y] += num[x];
    }else{
        par[y] = x;
        num[x] += num[y];
        if(depth[x] == depth[y]) depth[x]++;
    }
}

//xとyが同じ集合に属するか否か
bool same(int x, int y){
    return find(x) == find(y);
}


int main(void){
    ll n, m;
    cin >> n >> m;

    ll a[m], b[m];
    rep(i, m){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }

    ll sum = (n - 1) / 2.0 * n;
    ll ans[m];
    init(n);
    for(int i = m - 1; i >= 0; i--){
        ans[i] = sum;
        ll a_par = find(a[i]);
        ll b_par = find(b[i]);
        if(a_par != b_par){
            sum -= num[a_par] * num[b_par];
            unit(a[i], b[i]);
        }
    }

    rep(i, m){
        cout << ans[i] << endl;
    }
    return 0;
}
