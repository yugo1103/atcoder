#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

bool check[1001][1001];

int main(void){
    ll h, w;
    cin >> h >> w;

    queue<pair<pair<ll, ll>, ll>> black;
    char map[h][w];
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> map[i][j];
            if(map[i][j] == '#'){
                pair<ll, ll> tmp = pair<ll, ll>(i, j);
                black.push(pair<pair<ll, ll>, ll>(tmp, 0));
                check[i][j] = true;
            }
        }
    }

    ll count = 0;
    while(black.size()){
        ll a = black.front().first.first;
        ll b = black.front().first.second;
        ll c = black.front().second;

        if(a > 0){
            if(!check[a - 1][b]){
                check[a - 1][b] = true;
                pair<ll, ll> tmp = pair<ll, ll>(a - 1, b);
                black.push(pair<pair<ll, ll>, ll>(tmp, c + 1));
            }
        }
        if(a < h - 1){
            if(!check[a + 1][b]){
                check[a + 1][b] = true;
                pair<ll, ll> tmp = pair<ll, ll>(a + 1, b);
                black.push(pair<pair<ll, ll>, ll>(tmp, c + 1));
            }
        }
        if(b > 0){
            if(!check[a][b - 1]){
                check[a][b - 1] = true;
                pair<ll, ll> tmp = pair<ll, ll>(a, b - 1);
                black.push(pair<pair<ll, ll>, ll>(tmp, c + 1));
            }
        }
        if(b < w - 1){
            if(!check[a][b + 1]){
                check[a][b + 1] = true;
                pair<ll, ll> tmp = pair<ll, ll>(a, b + 1);
                black.push(pair<pair<ll, ll>, ll>(tmp, c + 1));
            }
        }

        black.pop();
        count = max(count, c);
    }
    cout << count << endl;
    return 0;
}
