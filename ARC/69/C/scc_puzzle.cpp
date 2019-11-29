#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll n, m;

bool check(ll mid){
    if(max(ll(0), mid - n) * 2 + mid * 2 <= m){
        return true;
    }else{
        return false;
    }
}

int main(void){
    cin >> n >> m;

    ll s = -1;
    ll e = 100000000000000;
    while(e - s != 1){
        ll mid = (e + s) / 2;
        if(check(mid)){
            s = mid;
        }else{
            e = mid;
        }
    }
    cout << s << endl;
}
