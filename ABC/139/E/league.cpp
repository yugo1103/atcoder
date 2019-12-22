#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

bool loop;
bool visited[1000001];
bool calculated[1000001];
ll dp[1000001];
ll ma = 0;
vector<ll> no[100001];

ll dfs(ll node){
    if(visited[node]){
        if(!calculated[node]){
            loop = true;
            return -1;
        }
        return dp[node];
    }else{
        visited[node] = true;
        dp[node] = 0;
        fore(a, no[node]){
            ll res = dfs(a);
            if(res == -1)return -1;
            dp[node] = max(res + 1, dp[node]);
        }
    }

    calculated[node] = true;
    return dp[node];
}
int main(void){
    ll n;
    cin >> n;

    ll a[n][n - 1];
    ll game[n][n];
    rep(i, 0, n){
        rep(j, 0, n - 1){
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    ll c = 0;
    rep(i, 0, n){
        rep(j, 0, n){
            if(i < j){
                game[i][j] = c;
                c++;
            }else{
                game[i][j] = -1;
            }
        }
    }

    rep(i, 0, n){
        rep(j, 0, n - 2){
            ll t1 = min(i, a[i][j]);
            ll t2 = max(i, a[i][j]);
            ll t3 = min(i, a[i][j + 1]);
            ll t4 = max(i, a[i][j + 1]);
            no[game[t1][t2]].push_back(game[t3][t4]);
        }
    }

    ll ans = 0;
    rep(i, 0, c){
        ans = max(dfs(i), ans);
        if(loop){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans + 1 << endl;
}
