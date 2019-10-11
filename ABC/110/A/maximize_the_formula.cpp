#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int a, b, c;
    ll ma = 0;

    cin >> a >> b >> c;
    ma = max(max(a, b), c);

    ll ans = a + b + c + ma * 10 - ma;
}
