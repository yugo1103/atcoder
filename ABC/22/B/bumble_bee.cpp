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
    map<ll, ll> x;
    rep(i, 0, n){
        cin >> a[i];
        x[a[i]]++;
    }

    ll count = 0;
    fore(i, x){
        count += i.second - 1;
    }

    cout << count << endl;
    return 0;
}
