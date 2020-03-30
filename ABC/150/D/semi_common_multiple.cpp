#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

//最大公約数,最小公倍数
ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int main(void){
    ll n, m;
    cin >> n >> m;

    ll a[n];
    ll lc = 1;
    rep(i, 0, n){
        cin >> a[i];
        lc = lcm(a[i] / 2, lc);
    }

    rep(i, 0, n){
        if(lc / (a[i] / 2) % 2 == 0){
            cout << 0 << endl;
            return 0;
        }
    }

    cout << m / lc - m / (lc * 2) << endl;
    return 0;
}
