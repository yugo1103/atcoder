#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll dp[100][2];

int main(void){
    ll n, k;
    cin >> n >> k;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    rep(i, 0, 100){
        rep(j, 0, 2){
            dp[i][j] = -1;
        }
    }

    dp[50][0] = 0;

    rrep(i, 49, 0){
        ll mask = 1LL << i;
        ll num = 0;
        rep(j, 0, n){
            if(a[j] & mask){
                num++;
            }
        }

        ll score0 = mask * num;
        ll score1 = mask * (n - num);

        if(dp[i + 1][1] != -1){
            dp[i][1] = max(dp[i][1], max(dp[i + 1][1] + score0, dp[i + 1][1] + score1));
        }

        if(dp[i + 1][0] != -1){
            if(k & mask){
                dp[i][1] = max(dp[i][1], dp[i + 1][0] + score0);
                dp[i][0] = max(dp[i][0], dp[i + 1][0] + score1);
            }else{
                dp[i][0] = max(dp[i][0], dp[i + 1][0] + score0);
            }
        }
    }

    cout << max(dp[0][1], dp[0][0]) << endl;
    return 0;
}
