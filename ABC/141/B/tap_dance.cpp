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

    rep(i, 0, s.size()){
        if(i % 2 == 0){
            if(s[i] != 'R' && s[i] != 'U' && s[i] != 'D'){
                cout << "No" << endl;
                return 0;
            }
        }else{
            if(s[i] != 'L' && s[i] != 'U' && s[i] != 'D'){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
