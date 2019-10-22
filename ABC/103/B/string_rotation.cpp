#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s, t;

    cin >> s >> t;

    rep(i, s.size()){
        string x = s;
        rep(j, s.size() - 1){
            x[j+1] = s[j];
        }
        x[0] = s[s.size()-1];
        if(x == t){
            cout << "Yes" << endl;
            return 0;
        }
        s = x;
    }

    cout << "No" << endl;
    return 0;
}
