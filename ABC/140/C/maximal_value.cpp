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

    ll a[n], b[n - 1];
    rep(i, 0, n - 1){
        cin >> b[i];
    }

    rep(i, 0, n){
        if(i == 0){
            a[i] = b[i];
        }else if(i == n - 1){
            a[i] = b[i - 1];
        }else{
            a[i] = min(b[i], b[i - 1]);
        }
    }

    ll sum = 0;
    rep(i, 0, n){
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}
