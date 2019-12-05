#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string s;
    cin >> s;

    ll num = 0;
    rep(i, 0, s.size() - 1){
        if(s[i] != s[i + 1]) num++;
    }

    cout << num << endl;
    return 0;
}
