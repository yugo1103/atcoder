#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll ans;
    if(k == 0){
        ans = a - b;
    }else if(k % 2 == 1){
        ans = b - a;
    }else{
        ans = a - b;
    }

    cout << ans << endl;
    return 0;
}
