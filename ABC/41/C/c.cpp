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

    pair<ll, ll> a[n];
    rep(i, 0, n){
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a, a + n, greater<pair<ll, ll>>());

    rep(i, 0, n){
        cout << a[i].second << endl;
    }

}
