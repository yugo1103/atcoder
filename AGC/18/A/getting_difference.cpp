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
    ll n, k;
    cin >> n >> k;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    ll gc = a[0];
    rep(i, 1, n){
        gc = gcd(gc, a[i]);
    }

    rep(i, 0, n){
        if(a[i] >= k){
            if((a[i] - k) % gc == 0){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
