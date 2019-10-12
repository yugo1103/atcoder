#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, t;
    cin >> n >> t;

    ll mi = 100000;

    rep(i, n){
        ll c, t_m;
        cin >> c >> t_m;
        if(t_m <= t){
            if(c < mi){
                mi = c;
            }
        }
    }

    if(mi == 100000){
        cout << "TLE" << endl;
    }else{
        cout << mi << endl;
    }

    return 0;
}
