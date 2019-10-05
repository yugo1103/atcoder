#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    map<ll, ll> a;
    rep(i, n){
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }

    ll ma = 0;
    for(auto a_t: a){
        ll tmp = a_t.second;
        if(a.count(a_t.first+1)){
            tmp += a[a_t.first+1];
        }
        if(a.count(a_t.first-1)){
            tmp += a[a_t.first-1];
        }
        ma = max(ma, tmp);
    }

    cout << ma << endl;
    return 0;
}
