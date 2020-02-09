#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll f[1000000];
int main(void){

    ll n, m;
    cin >> n >> m;
    map<ll, ll> ans;

    rep(i, 0, m){
        ll t1;
        string t2;

        cin >> t1 >> t2;
        t1--;
        if(t2 == "AC"){
            f[t1] = 1;
        }else{
            if(f[t1] == 0){
                ans[t1]++;
            }
        }
    }

    ll count = 0;
    ll ac = 0;
    rep(i, 0, n){
        if(f[i] == 1){
            count += ans[i];
            ac++;
        }
    }
    cout << ac << " " << count << endl;
    return 0;
}
