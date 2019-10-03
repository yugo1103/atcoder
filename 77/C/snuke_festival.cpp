#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n], b[n], c[n];
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
    }
    rep(i, n){
        cin >> c[i];
    }

    sort(a, a+n);
    sort(b, b+n);
    sort(c, c+n);

    ll ans = 0;
    rep(i, n){
        ll count_a = 0, count_c = 0;
        count_a = lower_bound(a, a + n, b[i]) - a;
        count_c = c + n - upper_bound(c, c + n, b[i]);
        ans += count_a * count_c;
    }

    cout << ans << endl;
    return 0;
}
