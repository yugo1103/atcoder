#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ld dp[3000][3000];

int main(void){
    ll n;
    cin >> n;

    ld p[n+1];
    rep(i, 1, n + 1){
        cin >> p[i];
    }

    rep(i, 0, n + 1){
        rep(j, 0, i + 1){
            if(i == 0){
                dp[i][j] = 1;
            }else if(j == 0){
                dp[i][j] = dp[i-1][j] * (1 - p[i]);
            }else{
                dp[i][j] = dp[i-1][j] * (1 - p[i]) + dp[i-1][j-1] * p[i];
            }
        }
    }

    ld sum = 0;
    rep(i, ceil(n / 2.0), n + 1){
        sum += dp[n][i];
    }
    printf("%.10Lf\n", sum);
    return 0;
}
