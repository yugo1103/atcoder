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

    if(s.size() == 2){
        if(s[0] == s[1]){
            cout << 1 << " " << 2 << endl;
            return 0;
        }
    }

    rep(i, 0, s.size() - 2){
        if(s[i] == s[i + 1] || s[i] == s[i + 2]){
            cout << i + 1 << " " << i + 3 << endl;
            return 0;
        }
    }
    cout << -1 << " " << -1 << endl;
    return 0;
}
