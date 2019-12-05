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
    ll count = 0;

    rep(i, 0, s.size()){
        if(s[i] == 'g'){
            count++;
        }else{
            count--;
        }
    }

    cout << count / 2 << endl;
    return 0;
}
