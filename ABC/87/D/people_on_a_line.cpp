#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

vector<pair<ll, ll>> path[100001];
bool used[100001];
ll x[100001];

bool dfs(ll n){
    used[n] = true;
    fore(a, path[n]){
        if(used[a.first]){
            if(x[a.first] != x[n] + a.second){
                return false;
            }
        }else{
            x[a.first] = x[n] + a.second;
            if(!dfs(a.first)){
                return false;
            }
        }
    }
    return true;
}

int main(void){
    ll n, m;
    cin >> n >> m;

    rep(i, 0, m){
        ll tmpl, tmpr, tmpd;
        cin >> tmpl >> tmpr >> tmpd;
        tmpl--;
        tmpr--;
        path[tmpl].push_back((pair<ll, ll>){tmpr, tmpd});
        path[tmpr].push_back((pair<ll,ll>){tmpl, -tmpd});
    }

    rep(i, 0, n){
        if(!used[i]){
            if(!dfs(i)){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
