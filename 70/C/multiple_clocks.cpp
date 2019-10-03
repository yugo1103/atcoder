#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int main(void){
    ll n;
    cin >> n;

    ll t[n];
    rep(i, n){
        cin >> t[i];
    }

    rep(i, n-1){
        t[i+1] = lcm(t[i], t[i+1]);
    }

    cout << t[n-1] << endl;
    return 0;
}
