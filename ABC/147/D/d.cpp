#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll num[61];

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
    ll n;
    cin >> n;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
        ll tmp = a[i];
        rep(j, 0, 61){
            if(tmp % 2 == 1){
                num[j]++;
            }
            tmp /= 2;
        }
    }

    ll sum = 0;
    rep(i, 0, n){
    ll calc = 1;
    ll tmp = a[i];
        rep(j, 0, 61){
            if(tmp % 2 == 1){
                sum += calc * (n - num[j]) % 1000000007;
            }else{
                sum += calc * num[j] % 1000000007;
            }
            sum %= 1000000007;
            calc *= 2;
            calc %= 1000000007;
            tmp /= 2;
        }
    }

    cout << sum * modinv(2, 1000000007) % 1000000007 << endl;
    return 0;
}
