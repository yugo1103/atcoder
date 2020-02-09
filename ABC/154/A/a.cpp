#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string s, t;
    ll a, b;
    string u;

    cin >> s >> t >> a >> b >> u;

    if(s == u){
        a--;
    }else{
        b--;
    }

    cout << a << " " << b << endl;
}
