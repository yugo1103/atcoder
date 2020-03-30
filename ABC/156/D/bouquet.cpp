#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main(void){
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 1;
    rep(i, 0, n){
        ans *= 2;
        ans %= MOD;
    }

    ll x = 1, y = 1, z = 1;
    rep(i, 1, n + 1){
        x *= i;
        x %= MOD;
    }
    rep(i, 1, a + 1){
        y *= i;
        y %= MOD;
    }
    rep(i, 1, n - a + 1){
        z *= i;
        z %= MOD;
    }

    ans *= y;
    ans %= MOD;
    ans *= z;
    ans %= MOD;

    ans = ans * modinv(x, MOD) % MOD;


    x = 1, y = 1, z = 1;
    rep(i, 1, n + 1){
        x *= i;
        x %= MOD;
    }
    rep(i, 1, b + 1){
        y *= i;
        y %= MOD;
    }
    rep(i, 1, n - b + 1){
        z *= i;
        z %= MOD;
    }

    ans *= y;
    ans %= MOD;
    ans *= z;
    ans %= MOD;

    ans = ans * modinv(x, MOD) % MOD;

    cout << ans << endl;
    return 0;
}
