#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll n, a, b;
ll h[100000];

bool check(ll x){
    ll count = 0;
    rep(i, 0, n){
        ll tmp = h[i] - x * b;
        if(tmp > 0){
            count += ceil(tmp / ld(a - b));
        }
    }

    if(count > x){
        return false;
    }else{
        return true;
    }
}

int main(void){
    cin >> n >> a >> b;

    rep(i, 0, n){
        cin >> h[i];
    }

    ll ok = 1000000000;
    ll ng = 0;
    while(ok - ng > 1){
        ll mid = (ok + ng) / 2;
        if(check(mid)){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
}
