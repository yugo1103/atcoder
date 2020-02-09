#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ld x[n];
    ld y[n];
    rep(i, 0, n){
        cin >> x[i] >> y[i];
    }

    rep(i, 0, n - 2){
        rep(j, i + 1, n - 1){
            rep(k, j + 1, n){
                ld a = sqrt(pow((x[i] - x[j]), 2) +  pow((y[i] - y[j]), 2));
                ld b = sqrt(pow((x[j] - x[k]), 2) +  pow((y[j] - y[k]), 2));
                ld c = sqrt(pow((x[k] - x[i]), 2) +  pow((y[k] - y[i]), 2));
                ld s = (a + b + c) / 2.0;
                ld S = sqrt(s*(s-a)*(s-b)*(s-c));
                ld R = a * b * c / 4.0 / S;
            }
        }
    }

    return 0;
}
