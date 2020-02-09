#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ll x[n];
    ll diff[n - 1];
    rep(i, 0, n){
        cin >> x[i];
    }
    rep(i, 0, n - 1){
        diff[i] = x[i + 1] - x[i];
    }
    return 0;
}
