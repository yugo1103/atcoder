#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b, k;
    cin >> a >> b >> k;

    vector<ll> x;
    rep(i, k){
        x.push_back(i + a);
        x.push_back(b - i);
    }

    sort(x.begin(), x.end());

    ll prev = 0;
    rep(i, x.size()){
        if(x[i] == prev || x[i] < a || x[i] > b) continue;
        cout << x[i] << endl;
        prev = x[i];
    }
}
