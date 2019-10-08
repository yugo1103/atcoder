#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    ll sum = 0;
    ll sum_odd = 0;
    rep(i, n){
        cin >> a[i];
        sum += a[i];
        if(i % 2 == 0 && i <= n - 3)
            sum_odd += a[i];
    }

    ll d[n];
    d[n-1] = (sum / 2 - sum_odd) * 2;
    d[0] = 2 * a[n-1] - d[n-1];

    rep(i, n - 1){
        d[i+1] = 2 * a[i] - d[i];
        cout << d[i] << " ";
    }

    cout << d[n-1] << endl;
    return 0;
}
