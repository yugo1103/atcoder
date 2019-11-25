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
    string s;
    cin >> n >> s;

    ll count = 0;
    ll v = 0;
    rep(i, 0, n){
        if(s[i] == '('){
            count++;
        }else{
            count--;
        }

        if(count < 0){
            v = max(v, abs(count));
        }
    }

    rep(i, 0, v){
        s = '(' + s;
    }

    count = 0;
    rep(i, 0, n + v){
        if(s[i] == '('){
            count++;
        }else{
            count--;
        }
    }

    rep(i, 0, count){
        s = s + ')';
    }
    cout << s << endl;
}
