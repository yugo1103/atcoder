#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    ll x, y;
    cin >> n >> m >> x >> y;

    ll a[n], b[m];
    rep(i, 0, n){
        cin >> a[i];
    }
    rep(i, 0, m){
        cin >> b[i];
    }


    ll count = 0;
    ll current_time = 0;
    while(1){
        ll *it;
        it = lower_bound(a, a + n, current_time);
        if(it == a + n){
            break;
        }
        current_time = *it + x;

        it = lower_bound(b, b + m, current_time);
        if(it == b + m){
            break;
        }
        current_time = *it + y;
        count++;
    }

    cout << count << endl;
}
