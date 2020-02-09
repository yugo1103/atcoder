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

    ll a[n];
    map<ll, ll> sum;
    ll su = 0;

    rep(i, 0, n){
        cin >> a[i];
        su += a[i];
        sum[su]++;
    }

    ll ans = 0;
    fore(i, sum){
        if(i.first == 0){
            ans += (i.second + 1) * i.second / 2;
        }else{
            ans += i.second * (i.second - 1) / 2;
        }
    }

    cout << ans << endl;
}
