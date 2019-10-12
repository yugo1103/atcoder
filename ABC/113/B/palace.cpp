#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, t, a;
    cin >> n >> t >> a;

    ld mi = 10000000;
    ll mi_num = 0;
    rep(i, n){
        ll h;
        cin >> h;

        if(mi > abs(a - (t - h * 0.006))){
            mi = abs(a - (t - h * 0.006));
            mi_num = i + 1;
        }
    }

    cout << mi_num << endl;
}
