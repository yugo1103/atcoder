#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()


int main(void){
    ll x;
    cin >> x;

    ll ans = 0;
    rep(i, 2, x + 1){
        ll n = i;
        while(n * i <= x){
            ans = max(ans, n * i);
            n = n * i;
        }
    }

    if(ans == 0){
        ans = 1;
    }

    cout << ans << endl;
}
