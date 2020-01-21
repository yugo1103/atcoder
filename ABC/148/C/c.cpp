#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int main(void){
    ll a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;
    return 0;
}
