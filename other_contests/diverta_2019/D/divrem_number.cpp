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

    ll sum = 0;
    rep(i, 1, sqrt(n) + 1){
        if(n % i == 0){
            ll a1 = n / i - 1;
            ll a2 = n / (n / i) - 1;
            if(a1 > i){
                sum += a1;
            }
            if(a2 > i){
                sum += a2;
            }
        }
    }

    cout << sum << endl;
}
