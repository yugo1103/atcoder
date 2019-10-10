#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    ll mi = 1000;
    rep(i, s.size()-2){
        ll tmp = (s[i] - '0') * 100;
        tmp += (s[i+1] - '0') * 10;
        tmp += (s[i+2] - '0') * 1;
        mi = min(abs(753 - tmp), mi);
    }
    cout << mi << endl;
    return 0;
}
