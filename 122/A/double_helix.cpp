#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    rep(i, s.size()){
        if(s[i] == 'A'){
            cout << "T";
        }else if(s[i] == 'T'){
            cout << "A";
        }else if(s[i] == 'C'){
            cout << "G";
        }else if(s[i] == 'G'){
            cout << "C";
        }
    }
    cout << endl;
    return 0;
}
