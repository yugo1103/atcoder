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
    ll count = 0;
    rep(i, 0, n){
        cin >> a[i];
        if(a[i] % 2 == 1){
            count++;
        }
    }

    if(count % 2 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
