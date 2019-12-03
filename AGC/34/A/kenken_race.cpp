#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, a, b, c, d;
    string s;
    cin >> n >> a >> b >> c >> d;
    cin >> s;
    a--;
    b--;
    c--;
    d--;

    rep(i, min(a, b), max(c, d) - 1){
        if(s[i] == '#' && s[i + 1] == '#'){
            cout <<  "No" << endl;
            return 0;
        }
    }

    if(c < d){
        cout << "Yes" << endl;
        return 0;
    }else{
        rep(i, b - 1, d){
            if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

}
