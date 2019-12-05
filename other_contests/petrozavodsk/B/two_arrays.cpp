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

    ll a[n];
    ll b[n];

    rep(i, 0, n){
        cin >> a[i];
    }
    rep(i, 0, n){
        cin >> b[i];
    }

    ll m = 0;
    ll p = 0;
    rep(i, 0, n){
        if(a[i] > b[i]){
            m += a[i] - b[i];
        }else{
            p += (b[i] - a[i]) / 2;
        }
    }

    if(p >= m){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
