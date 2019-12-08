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

    ll n = 0;
    rep(i, 0, s.size()){
        if(s[i] != s[s.size() - 1 - i]){
            n++;
            s[i] = s[s.size() - 1 - i];
        }
    }
    cout << n << endl;

    return 0;
}
