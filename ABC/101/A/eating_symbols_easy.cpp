#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    ll i = 0;
    rep(j, s.size()){
        if(s[j] == '+'){
            i++;
        }else{
            i--;
        }
    }

    cout << i << endl;
    return 0;
}
