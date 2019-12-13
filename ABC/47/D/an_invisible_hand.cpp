#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, t;
    cin >> n >> t;

    ll a[n];
    ll b[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    b[0] = a[0];
    rep(i, 1, n){
        b[i] = min(b[i - 1], a[i]);
    }

    ll ma = 0;
    rep(i, 0, n){
        ma = max(ma, a[i] - b[i]);
    }

    ll count = 0;
    rep(i, 0, n){
        if(a[i] - b[i] == ma){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
