#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    double ans = 0;
    cin >> n;

    rep(i, n){
        double tmp;
        string u;
        cin >> tmp >> u;

        if(u == "JPY")
            ans += tmp;
        if(u == "BTC")
            ans += tmp * 380000;
    }

    printf("%.10lf", ans);
    return 0;
}
