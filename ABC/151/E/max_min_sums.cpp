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
    ll n, k;
    cin >> n >> k;

    ll a[n];
    ll m[n];
    m[0] = 1;

    rep(i, 0, n){
        cin >> a[i];
    }

    rep(i, 1, n){
        m[i] = m[i - 1] * i;
        m[i] %= MOD;
    }
    m[0] = 1;

    sort(a, a + n);

    ll sum_m = 0;
    ll sum = 0;
    rep(i, 0, n - k + 1){
        sum_m += a[i] * m[n - (i + 1)] % MOD * modinv(m[k - 1], MOD) % MOD * modinv(m[n - (i + 1) - k + 1], MOD) % MOD;
        sum_m %= MOD;
    }

    rrep(i, n - 1, k - 1){
        sum += a[i] * m[i] % MOD * modinv(m[k - 1], MOD) % MOD * modinv(m[i - k + 1], MOD) % MOD;
        sum %= MOD;
    }

    cout << (sum - sum_m) % MOD << endl;
    return 0;
}
