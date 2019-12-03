#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, c, k;
    cin >> n >> c >> k;

    ll t[n];
    rep(i, 0, n){
        cin >> t[i];
    }

    sort(t, t + n);
    ll count = 1;
    ll time = t[0];
    ll num = 1;
    rep(i, 1, n){
        if(t[i] <= time + k && num < c){
            num++;
        }else{
            time = t[i];
            num = 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
