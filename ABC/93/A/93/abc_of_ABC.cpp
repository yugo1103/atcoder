#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    ll a_c = 0, b_c = 0, c_c = 0;
    rep(i, 3){
        if(s[i] == 'a') a_c++;
        if(s[i] == 'b') b_c++;
        if(s[i] == 'c') c_c++;
    }

    if(a_c && b_c && c_c){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
