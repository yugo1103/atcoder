#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;
    cin >> n >> k;

    ll sum = 0;
    ll count[n];
    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    k = min(k, n - k + 1);

    count[0] = 1;
    rep(i, 0, n - 1){
        count[i + 1] = min(count[i] + 1, k);
    }
    count[n - 1] = 1;
    rrep(i, n - 1, 1){
        count[i - 1] = min(min(count[i] + 1, k), count[i - 1]);
    }

    rep(i, 0, n){
        sum += a[i] * count[i];
    }

    cout << sum << endl;
    return 0;
}
