#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll t[n], a[n];
    rep(i, n){
        cin >> t[i] >> a[i];
    }

    ll c_t = t[0], c_a = a[0];
    rep(i, n-1){
        ll tmp_t = ceil(c_t / (long double)(t[i+1]));
        ll tmp_a = ceil(c_a / (long double)(a[i+1]));

        ll tmp = max(tmp_t, tmp_a);
        c_t = tmp * t[i+1];
        c_a = tmp * a[i+1];
    }

    cout << c_t + c_a << endl;
    return 0;
}
