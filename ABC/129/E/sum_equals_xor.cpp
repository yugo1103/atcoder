#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

ll dp[100009][2];

int main(void){
    string l;
    cin >> l;

    ll len = l.size();

    //確定(0, 0)
    dp[0][1] = 1;
    //未確定(1, 0), (0, 1)
    dp[0][0] = 2;

    rep(i, 1, len){
        //確定　→　確定
        dp[i][1] += dp[i - 1][1];
        dp[i][1] %= MOD;
        dp[i][1] += dp[i - 1][1] * 2 % MOD;
        dp[i][1] %= MOD;

        //未確定　→　未確定
        if(l[i] == '0'){
            dp[i][0] += dp[i - 1][0];
            dp[i][0] %= MOD;
        }else{
            dp[i][0] += dp[i - 1][0] * 2 % MOD;
            dp[i][0] %= MOD;
        }

        //未確定　→　確定
        if(l[i] != '0'){
            dp[i][1] += dp[i - 1][0];
            dp[i][1] %= MOD;
        }
    }

    cout << ( dp[len - 1][1] + dp[len - 1][0] ) % MOD << endl;
}
