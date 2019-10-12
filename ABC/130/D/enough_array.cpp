#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

map<pair<ll, ll>, ll> check;
ll n, k;
ll a[100000];

ll dp(ll x, ll k){
    if(check.count(make_pair(x, k))){
        return check[make_pair(x, k)];
    }
    if(k == 0)
        return x;
    else if(x >= 0 && k >= a[x])
        return dp(x - 1, k) + dp(x - 1, k - a[x]);
    else if(x >= 0)
        return dp(x - 1, k);
    else
        return 0;
}

int main(void){
    cin >> n >> k;

    rep(i, n){
        cin >> a[i];
    }

    ll sum = 0;
    rep(i, n){
        sum += dp(i, k);
    }

    cout << sum << endl;
    return 0;
}
