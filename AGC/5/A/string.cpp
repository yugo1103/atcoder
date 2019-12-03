#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string x;
    cin >> x;

    ll c = 0;
    ll cs = 0;
    rep(i, 0, x.size()){
        if(x[i] == 'S'){
            cs++;
        }else if(x[i] == 'T' && cs > 0){
            cs--;
            c += 2;
        }
    }

    cout << x.size() - c << endl;
}
