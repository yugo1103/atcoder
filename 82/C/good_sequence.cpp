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

    ll count = 0;
    for(auto m: a){
        if(m.first < m.second){
            count += m.second - m.first;
        }else if(m.first > m.second){
            count += m.second;
        }
    }

    cout << count << endl;
    return 0;


}
