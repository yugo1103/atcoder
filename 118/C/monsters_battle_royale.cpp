#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int main(void){
    int n;
    cin >> n;

    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    rep(i, n - 1){
        a[i + 1] = gcd(a[i], a[i+1]);
    }

    cout << a[n - 1] << endl;
    return 0;
}
