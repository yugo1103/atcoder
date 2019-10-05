#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, k;
    cin >> n >> k;

    ll x[n];
    rep(i, n)
        cin >> x[i];

    ll ans = 10000000000;
    rep(i, n - k + 1){
        ll l = abs(x[i]) + abs(x[i] - x[i + k - 1]);
        ll r = abs(x[i + k - 1]) + abs(x[i] - x[i + k - 1]);
        ans = min(ans, min(l, r));
    }

    cout << ans << endl;
    return 0;
}
