#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    int count = 0;
    rep(i, s.size() - 1){
        if(s[i] == s[i+1]){
            if(s[i] == '0')
                s[i+1] = '1';
            else
                s[i+1] = '0';
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
