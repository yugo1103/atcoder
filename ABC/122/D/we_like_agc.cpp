#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)
ll dp[101][4][4][4];

int main(void){
    ll n;
    cin >> n;


    dp[0][3][3][3] = 1;


    rep(i, n){
        rep(j, 4){
            rep(k, 4){
                rep(l, 4){
                    if(dp[i][j][k][l] == 0) continue;
                    rep(m, 4){
                        if(m == 2 && j == 1 && k == 0) continue;
                        if(m == 2 && j == 0 && k == 1) continue;
                        if(m == 1 && j == 2 && k == 0) continue;
                        if(m == 2 && j == 1 && l == 0) continue;
                        if(m == 2 && k == 1 && l == 0) continue;

                        dp[i+1][m][j][k] += dp[i][j][k][l];
                        dp[i+1][m][j][k] %= 1000000007;
                    }
                }
            }
        }
    }

    ll ans = 0;
    rep(i, 4){
        rep(j, 4){
            rep(k, 4){
                ans += dp[n][i][j][k];
                ans %= 1000000007;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
