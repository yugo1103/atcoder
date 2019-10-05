#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    pair<ll, ll> s[n];
    rep(i, n){
        cin >> s[i].first;
        s[i].second = i + 1;
    }

    sort(s, s + n);

    rep(i, n){
        cout << s[i].second << " ";
    }
    cout << endl;
    return 0;
}
