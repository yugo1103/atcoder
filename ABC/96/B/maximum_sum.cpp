#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b, c;
    ll k;
    cin >> a >> b >> c;
    cin >> k;

    ll ma = 0;
    ma = max(a, max(b, c));
    ll sum = a + b + c - ma;
    ma = pow(2, k) * ma;
    cout << sum + ma << endl;
    return 0;
}
