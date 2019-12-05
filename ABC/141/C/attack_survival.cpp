#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k, q;
    cin >> n >> k >> q;
    ll a[q];
    rep(i, 0, q){
        cin >> a[i];
        a[i]--;
    }

    ll p[n];
    rep(i, 0, n){
        p[i] = k - q;
    }

    rep(i, 0, q){
        p[a[i]]++;
    }

    ll num = n;
    rep(i, 0, n){
        if(p[i] <= 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}
