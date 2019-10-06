#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    ll sum = 0;
    rep(i, n){
        cin >> a[i];
        sum += a[i];
    }

    ll dif = 100000000000;
    ll count = 0;
    rep(i, n - 1){
        count += a[i];
        dif = min(ll(abs(double(sum) / 2.0 - count) * 2), dif);
    }

    cout << dif << endl;
    return 0;
}
