#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    cin >> n >> m;

    ll a[m], b[m];
    ll c[m];

    ll dp[m + 1][int(pow(2, int(n)))];
    rep(i, 0, m + 1){
        rep(j, 0, pow(2, n)){
            if(i == 0 && j == 0){
                dp[i][j] = 0;
            }else{
                dp[i][j] = 1000000000;
            }
        }
    }

    rep(i, 0, m){
        cin >> a[i] >> b[i];
        c[i] = 0;
        rep(j, 0, b[i]){
            ll tmp;
            cin >> tmp;
            tmp--;
            c[i] |= 1LL << tmp;
        }
    }



    rep(i, 0, m){
        rep(j, 0, pow(2, n)){
            if(i == 0){
                dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
            }else{
                ll tmp = j | c[i - 1];
                dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
                dp[i + 1][tmp] = min(dp[i + 1][tmp], dp[i][j] + a[i - 1]);
            }
        }
    }

    cout << (dp[m][int(pow(2, int(n))) - 1] < 1000000000 ? dp[m][int(pow(2, int(n))) - 1] : -1) << endl;

}
