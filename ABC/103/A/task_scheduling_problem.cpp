#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = abs(a - b);
    ll y = abs(a - c);
    ll z = abs(b - c);

    cout << x + y + z - max(x, max(y, z)) << endl;
    return 0;
}
