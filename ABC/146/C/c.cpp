#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll a, b, x;
    cin >> a >> b >> x;

    ll tmp = x;
    ll n = 0;
    while(tmp){
        tmp /= 10;
        n++;
    }

    ll ans = 0;
    ll an = 0;
    n = min(n, ll(9));
    rep(i, 1, n + 1){
        ll aaa = (x - i * b) / a;
        if(aaa < pow(10, i-1))continue;
        ll a_t = min(aaa * a, a * ll(pow(10, i) - 1));
        if(ans < a_t){
            an = min(aaa, ll(pow(10, i) - 1));
        }
    }

    if(1000000000 * a + b * 10 <= x){
        an = 1000000000;
    }
    cout << an << endl;
    return 0;
}
