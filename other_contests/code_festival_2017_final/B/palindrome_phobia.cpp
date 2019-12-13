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

    ll a = 0, b = 0, c = 0;
    rep(i, 0, s.size()){
        if(s[i] == 'a'){
            a++;
        }else if(s[i] == 'b'){
            b++;
        }else{
            c++;
        }
    }

    ll x = 0;
    x = min(min(a, b), c);
        if(a > x + 1){
            cout << "NO" << endl;
            return 0;
        }
        if(b > x + 1){
            cout << "NO" << endl;
            return 0;
        }
        if(c > x + 1){
            cout << "NO" << endl;
            return 0;
        }

    cout << "YES" << endl;
    return 0;
}
