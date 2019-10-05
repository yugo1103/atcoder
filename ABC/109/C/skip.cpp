#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }

int main(void){
    ll n, x;
    cin >> n >> x;

    ll city[n+1];
    rep(i, n)
        cin >> city[i];

    city[n] = x;

    sort(city, city + n + 1);

    ll diff[n];
    rep(i, n)
        diff[i] = city[i+1] - city[i];
    rep(i, n-1)
        diff[i+1] = gcd(diff[i], diff[i+1]);

    cout << diff[n-1] << endl;
}
