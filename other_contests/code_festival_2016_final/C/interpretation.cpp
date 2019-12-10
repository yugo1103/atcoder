#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MAX_N 200005

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

    ll k[n];
    vector<ll> l[n];

    init(n + m);

    rep(i, 0, n){
        cin >> k[i];
        rep(j, 0, k[i]){
            ll tmp;
            cin >> tmp;
            tmp--;
            l[i].push_back(tmp);
        }

        rep(j, 0, l[i].size()){
            unit(l[i][j], m + i);
        }
    }

    rep(i, 0, n - 1){
        if(!same(m, m + i)){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
