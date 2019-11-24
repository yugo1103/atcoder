#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){

    ll n;
    cin >> n;

    string s;
    cin >> s;

    rep(i, 0, s.size()){
        if(s[i] + n > 'Z'){
            cout << char(s[i] + n - 'Z' + 'A' - 1);
        }else{
            cout << char(s[i] + n);
        }
    }
    cout << endl;
    return 0;
}
