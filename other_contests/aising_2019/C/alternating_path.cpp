#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

bool check[400 + 2][400 + 2];
char s[400 + 2][400 + 2];
ll h, w;

pair<ll, ll> dfs(ll x, ll y){
    if(check[x][y]) return make_pair(0, 0);
    check[x][y] = true;

    pair<ll, ll> sum;
    if(s[x][y] == '#'){
        sum.first = 0;
        sum.second = 1;
    }else{
        sum.first = 1;
        sum.second = 0;
    }

    if(s[x][y] != s[x + 1][y] && s[x + 1][y] != 0){
        pair<ll, ll> tmp;
        tmp = dfs(x + 1, y);
        sum.first += tmp.first;
        sum.second += tmp.second;
    }
    if(s[x][y] != s[x - 1][y] && s[x - 1][y] != 0){
        pair<ll, ll> tmp;
        tmp = dfs(x - 1, y);
        sum.first += tmp.first;
        sum.second += tmp.second;
    }
    if(s[x][y] != s[x][y + 1] && s[x][y + 1] != 0){
        pair<ll, ll> tmp;
        tmp = dfs(x, y + 1);
        sum.first += tmp.first;
        sum.second += tmp.second;
    }
    if(s[x][y] != s[x][y - 1] && s[x][y - 1] != 0){
        pair<ll, ll> tmp;
        tmp = dfs(x, y - 1);
        sum.first += tmp.first;
        sum.second += tmp.second;
    }

    return sum;
}

int main(void){
    cin >> h >> w;

    rep(i, 0, h + 2){
        rep(j, 0, w + 2){
            if(i == 0 || i >= h + 1 || j == 0 || j >= w + 1){
                s[i][j] = 0;
                check[i][j] = true;
            }else{
                cin >> s[i][j];

            }
        }
    }

    ll ans = 0;
    rep(i, 1, h + 1){
        rep(j, 1, w + 1){
            if(s[i][j] == '#' && !check[i][j]){
                pair<ll, ll> tmp = dfs(i, j);
                ans += tmp.first * tmp.second;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
