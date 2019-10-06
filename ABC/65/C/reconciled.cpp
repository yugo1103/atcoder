#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, m;
    cin >> n >> m;

    ll ans = 1;
    if(abs(n - m) == 1){
        rep(i, min(m, n)){
            ans *= (n - i);
            ans %= 1000000007;
            ans *= (m - i);
            ans %= 1000000007;
        }
    }

    if(n == m){
        rep(i, n){
            ans *= (n - i);
            ans %= 1000000007;
            ans *= (m - i);
            ans %= 1000000007;
        }
        ans *= 2;
        ans %= 1000000007;
    }

    if(abs(n - m) > 1){
        ans = 0;
    }


    cout << ans << endl;
    return 0;
}
