#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll dp[1000000][13];

int main(void){
    string s;
    cin >> s;

    ll x[s.size()];
    rep(i, 0, s.size()){
        if(s[i] == '?'){
            x[i] = -1;
        }else{
            x[i] = s[i] - '0';
        }
    }

    dp[0][0] = 1;

    rep(i, 0, s.size()){
        rep(j, 0, 13){
            if(x[i] == -1){
                rep(k, 0, 10){
                    dp[i + 1][(k + j * 10) % 13] += dp[i][j];
                    dp[i + 1][(k + j * 10) % 13] %= 1000000007;
                }
            }else{
                dp[i + 1][(x[i]+ j * 10) % 13] += dp[i][j];
                dp[i + 1][(x[i]+ j * 10) % 13] %= 1000000007;
            }
        }
    }

    cout << dp[s.size()][5] << endl;
    return 0;
}
