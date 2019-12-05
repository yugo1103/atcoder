#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll s;
    cin >> s;

    ll x1 = 0, y1 = 0;
    ll x2 = 1000000000, y2 = 1;
    ll x3 = (x2 - s % x2) % x2;
    ll y3 = (s + x3) / x2;

    cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;

}
