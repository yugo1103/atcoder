#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    if(s[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }

    ll count = 0;
    for(int i = 2; i < s.size() - 1; i++){
        if(s[i] == 'C')
            count++;
    }

    if(count != 1){
        cout << "WA" << endl;
        return 0;
    }

    for(int i = 1; i < s.size(); i++){
        if(s[i] != 'C' && s[i] <= 'Z'){
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;
    return 0;
}
