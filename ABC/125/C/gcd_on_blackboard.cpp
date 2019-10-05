#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }//最大公約数
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }//最小公倍数

ll calc(ll g){

}

int main(void){
    int n;
    cin >> n;

    ll a[n];
    rep(i, n)
        cin >> a[i];

    ll l[n], r[n];
    l[0] = a[0];
    r[n-1] = a[n-1];

    rep(i, n){
        if(i != 0)
            l[i] = gcd(l[i-1], a[i]);
    }

    for(int i = n-2; i >= 0; i--){
        r[i] = gcd(r[i+1], a[i]);
    }

    ll g, m = 0;
    rep(i, n){
        if(i == 0)
            g = r[i + 1];
        else if(i == n-1)
            g = l[i - 1];
        else
            g = gcd(l[i - 1], r[i + 1]);
        m = max(g, m);
    }

    cout << m << endl;
}
