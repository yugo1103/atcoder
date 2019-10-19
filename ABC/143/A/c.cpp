#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    string s;

    cin >> n >> s;

    ll count = 1;
    rep(i, n-1){
        if(s[i] != s[i+1]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
