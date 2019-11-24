#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll n;
ll c_ab[100003];
ll n_ab[100003];
ll c_ac[100003];
ll n_ac[100003];
vector<ll> node[100003];
void dfs_ab(ll x, ll cost){
    if(c_ab[x] == 1){
        return;
    }else{
        c_ab[x] = 1;
        n_ab[x] = cost;
        fore(d, node[x]){
            dfs_ab(d, cost + 1);
        }
    }
}
void dfs_ac(ll x, ll cost){
    if(c_ac[x] == 1){
        return;
    }else{
        c_ac[x] = 1;
        n_ac[x] = cost;
        fore(d, node[x]){
            dfs_ac(d, cost + 1);
        }
    }
}

int main(void){
    cin >> n;

    rep(i, 0, n-1){
        ll ta, tb;
        cin >> ta >> tb;
        ta--;
        tb--;
        node[ta].push_back(tb);
        node[tb].push_back(ta);
    }

    dfs_ab(0, 0);
    dfs_ac(n - 1, 0);

    ll f = 0, s = 0;
    rep(i, 0, n){
        if(n_ab[i] <= n_ac[i]){
            f++;
        }else{
            s++;
        }
    }
    if(f > s){
        cout << "Fennec" << endl;
    }else{
        cout << "Snuke" << endl;
    }

    return 0;


}
