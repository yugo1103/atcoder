#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    map<ll, ll> a;
    rep(i, n){
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }

    vector<ll> b;
    for(auto m: a){
        b.push_back(m.second);
    }

    ll num = b.size();
    ll count = 0;
    sort(b.begin(), b.end());
    rep(i, b.size()){
        if(num > k && b[i] != 0){
            num--;
            count += b[i];
        }
    }

    cout << count << endl;
    return 0;
}
