#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()


int main(void){
    ll h, w;
    cin >> h >> w;

    char map[h][w];
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> map[i][j];
        }
    }

    ll dp[h][w];
    rep(i, 0, h){
        rep(j, 0, w){
            if(map[i][j] == '#'){
                dp[i][j] = 0;
            }else{
                if(i == 0 && j == 0){
                    dp[i][j] = 1;
                }else if(i == 0){
                    dp[i][j] = dp[i][j-1];
                }else if(j == 0){
                    dp[i][j] = dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    dp[i][j] %= 1000000007;
                }
            }
        }
    }

    cout << dp[h-1][w-1] << endl;
    return 0;
}
