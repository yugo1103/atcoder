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

    ll a[n], b[n];
    rep(i, 0, n){
        cin >> a[i] >> b[i];
    }

    ll count = 0;
    rrep(i, n - 1, 0){
        a[i] += count;
        if(a[i] % b[i] != 0){
            count += b[i] - a[i] % b[i];
        }
    }

    cout << count << endl;
}
