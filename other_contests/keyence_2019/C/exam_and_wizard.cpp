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

    ll c[n];
    ll count = 0;
    ll m = 0;
    rep(i, 0, n){
        c[i] = a[i] - b[i];
        if(c[i] < 0){
            m += abs(c[i]);
            count++;
        }
    }

    sort(c, c + n);
    rrep(i, n - 1, 0){
        if(m > 0){
            if(c[i] > 0){
                m -= c[i];
                count++;
            }else{
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << count << endl;
    return 0;
}
