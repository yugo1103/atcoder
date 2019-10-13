#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    map<string, ll> s;
    string st[n];

    rep(i, n){
        string tmp;
        cin >> tmp;

        s[tmp]++;
        st[i] = tmp;
    }

    rep(i, n - 1){
        if(s[st[i]] == 2){
            cout << "No" << endl;
            return 0;
        }
        if(st[i][st[i].size()-1] != st[i+1][0]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
