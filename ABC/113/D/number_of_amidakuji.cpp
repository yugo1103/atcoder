#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll dp[101][9];

int main(void){
    ll h, w, k;
    cin >> h >> w >> k;

    dp[0][0] = 1;

    rep(i, 0, h){
        rep(j, 0, w){
            rep(bit, 0, 1<<(w-1)){
                bool flag = true;
                rep(t, 0, w-2){
                    if(((bit >> t) & 3) == 3)
                        flag = false;
                    }
                if(!flag) continue;

                if((bit >> j) & 1 && j < w-1){
                    dp[i+1][j+1] += dp[i][j];
                    dp[i+1][j+1] %= 1000000007;
                }else if((bit >> (j-1)) & 1 && j > 0){
                    dp[i+1][j-1] += dp[i][j];
                    dp[i+1][j-1] %= 1000000007;
                }else{
                    dp[i+1][j] += dp[i][j];
                    dp[i+1][j] %= 1000000007;
                }
            }
        }
    }

    cout << dp[h][k-1] << endl;
    return 0;
}
