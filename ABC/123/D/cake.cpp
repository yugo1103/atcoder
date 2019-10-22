#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll x, y, z, k;
    cin >> x >> y >> z >> k;

    ll a[x], b[y], c[z];

    rep(i, x){
        cin >> a[i];
    }
    rep(i, x){
        cin >> b[i];
    }
    rep(i, x){
        cin >> c[i];
    }

    vector<ll> ab;
    rep(i, x){
        rep(j, y){
            ab.push_back(a[i] + b[j]);
        }
    }

    sort(ab.begin(),  ab.end(), greater<ll>());

    vector<ll> abc;
    rep(i, min(k, x * y)){
        rep(j, z){
            abc.push_back(ab[i] + c[j]);
        }
    }

    sort(abc.begin(), abc.end(), greater<ll>());

    rep(i, k){
        cout << abc[i] << endl;
    }

    return 0;
}
