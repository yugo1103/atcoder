#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll k, t;
    cin >> k >> t;

    ll a[t];
    ll ma = 0;
    ll sum = 0;
    rep(i, 0, t){
        cin >> a[i];
        ma = max(a[i], ma);
        sum += a[i];
    }

    if(sum - ma < ma - 1){
        cout << ma - 1 - sum + ma << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;




}
