#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll c0[30], c1[30], c2[30];
int main(void){
    ll n, c;
    cin >> n >> c;

    ll d[c][c];
    rep(i, 0, c){
        rep(j, 0, c){
            cin >> d[i][j];
        }
    }

    rep(i, 0, n){
        rep(j, 0, n){
            ll tmp;
            cin >> tmp;
            tmp--;
            if((i + j) % 3 == 0){
                c0[tmp]++;
            }
            if((i + j) % 3 == 1){
                c1[tmp]++;
            }
            if((i + j) % 3 == 2){
                c2[tmp]++;
            }
        }
    }

    ll mi = 10000000000000;
    ll cost;
    rep(i, 0, c){
        rep(j, 0, c){
            rep(k, 0, c){
                cost = 0;
                if(i == j || j == k || k == i){
                    continue;
                }
                rep(l, 0, c){
                    cost += c0[l] * d[l][i];
                    cost += c1[l] * d[l][j];
                    cost += c2[l] * d[l][k];
                }
                mi = min(cost, mi);
            }
        }
    }
    cout << mi << endl;
    return 0;
}
