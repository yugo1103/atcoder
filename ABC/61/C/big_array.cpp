#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    pair<ll, ll> a[n];
    rep(i, n){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);

    ll count = 0;
    ll out;
    rep(i, n){
        out = a[i].first;
        count += a[i].second;
        if(count >= k) break;
    }

    cout << out << endl;
    return 0;
}
