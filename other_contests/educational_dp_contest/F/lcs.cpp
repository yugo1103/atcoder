#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

ll dp[3001][3001];
int main(void){
    string s, t;
    cin >> s >> t;

    rep(i, s.size()){
        rep(j, t.size()){
            if(s[i] == t[j]){
                dp[i+1][j+1] = dp[i][j] + 1;
            }else{
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }

    string ans = "";
    ll d = dp[s.size()][t.size()];
    ll y = s.size();
    ll x = t.size();

    while(true){
        if(d == 0)break;
        if(dp[y-1][x] == d) y--;
        else if(dp[y][x-1] == d) x--;
        else{
            ans += s[y-1];
            x--;
            y--;
            d--;
        }
    }

    rep(i, ans.size()){
        cout << ans[ans.size() - i - 1];
    }
    cout << endl;

    return 0;

}
