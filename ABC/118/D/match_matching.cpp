#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll dp[10000];
ll conv(ll i){
    if(i == 1) return 2;
    if(i == 2) return 5;
    if(i == 3) return 5;
    if(i == 4) return 4;
    if(i == 5) return 5;
    if(i == 6) return 6;
    if(i == 7) return 3;
    if(i == 8) return 7;
    if(i == 9) return 6;
}

int main(void){
    ll n, m;
    cin >> n >> m;

    ll a[m];
    rep(i, 0, m){
        cin >> a[i];
    }

    rep(i, 0, n + 1){
        dp[i] = 0;
        rep(j, 0, m){
            if(i - conv(a[j]) < 0){
                dp[i] = 0;
            }else{
                dp[i] = max(dp[i - conv(a[j])] + 1, dp[i]);
            }
        }
    }

    string ans = "";
    ll remain = dp[n];
    ll match = n;

    while(match > 0){
        rrep(i, m - 1, 0){
            if(match - conv(a[i]) < 0) continue;
            if(dp[match - conv(a[i])] == remain - 1){
                ans += to_string(a[i]);
                match -= conv(a[i]);
                remain--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
