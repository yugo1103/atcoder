#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
int dp[100010];
#define INF 1000000;

int main(void){
    int n;
    cin >> n;

    dp[0] = 0;
    for(int n = 1; n <= 100000; n++){
        dp[n] = INF;
        int power = 1;
        while(power <= n){
            dp[n] = min(dp[n], dp[n - power] + 1);
            power *= 6;
        }
        power = 1;
        while(power <= n){
            dp[n] = min(dp[n], dp[n - power] + 1);
            power *= 9;
        }
    }

    cout << dp[n] << endl;
    return 0;
}
