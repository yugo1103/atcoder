#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll p[n];
    ll sum = 0, ma = 0;
    rep(i, n){
        cin >> p[i];
        ma = max(ma, p[i]);
        sum += p[i];
    }


    cout << sum - ma / 2 << endl;
}
