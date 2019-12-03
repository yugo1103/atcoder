#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string s;
    cin >> s;


    ll ans = 100000;
    rep(i, 0, s.size()){
        ll tmp = 0;
        ll count = 0;
        rep(j, 0, s.size()){
            if(s[j] == s[i]){
                tmp = max(tmp, count);
                count = 0;
            }else{
                count++;
            }
        }
        tmp = max(tmp, count);
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
