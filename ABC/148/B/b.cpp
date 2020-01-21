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
    string s, t;
    cin >> s >> t;


    rep(i, 0, 2 * n){
        if(i % 2 == 0){
            cout << s[i / 2];
        }else{
            cout << t[i / 2];
        }
    }
    cout << endl;

    return 0;
}
