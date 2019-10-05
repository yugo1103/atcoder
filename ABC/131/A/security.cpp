#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    rep(i, 3){
        if(s[i] == s[i + 1]){
            puts("Bad");
            return 0;
        }
    }

    puts("Good");
    return 0;

}
