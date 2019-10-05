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
    ll ma_sec = 0;
    for(auto a_tmp: a){
        if(a_tmp.second >= 2){
            if(ma <= a_tmp.first){
                if(a_tmp.second >= 4){
                    ma_sec = a_tmp.first;
                }else{
                    ma_sec = ma;
                }
                ma = a_tmp.first;
            }else if(ma_sec <= a_tmp.first){
                ma_sec = a_tmp.first;
            }
        }
    }

    cout << ma * ma_sec << endl;
    return 0;
}
