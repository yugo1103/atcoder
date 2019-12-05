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

    ll sum = 0;
    rep(i, 0, s.size()){
        if(s[i] == 'U'){
            sum += i * 2;
            sum += s.size() - i - 1;
        }else{
            sum += i;
            sum += (s.size() - i - 1) * 2;
        }
    }

    cout << sum << endl;
    return 0;
}
