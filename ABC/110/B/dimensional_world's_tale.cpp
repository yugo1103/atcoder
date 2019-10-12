#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, m, x, y;
    cin >> n >> m >> x >> y;

    ll ma = -10000;
    ll mi = 10000;
    ll a;
    rep(i, n){
        cin >> a;
        ma = max(a, ma);
    }
    rep(i, m){
        cin >> a;
        mi = min(a, mi);
    }

    if(ma > mi){
        cout << "War" << endl;
        return 0;
    }


    for(int i = x+1; i <= y; i++){
        if(ma < i && mi >= i){
            cout << "No War" << endl;
            return 0;
        }
    }

    cout << "War" << endl;
    return 0;
}
