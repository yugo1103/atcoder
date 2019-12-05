#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll x;
    cin >> x;

    ll ans = 0;
    ans = x / 11 * 2;
    if(x % 11 != 0){
        if(x % 11 <= 6){
            ans++;
        }else{
            ans += 2;
        }
    }

    cout << ans << endl;
    return 0;
}
