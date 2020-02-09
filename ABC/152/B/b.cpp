#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll a, b;
    cin >> a >> b;

    rep(i, 0, max(a, b)){
        cout << min(a, b);
    }

    cout << endl;

    return 0;
}
