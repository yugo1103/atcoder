#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    int count[4] = {}, count_all = 0;

    cin >> s;
    
    rep(i, 4){
        rep(j, 4){
            if(s[i] == s[j])
                count[i]++;
        }
    }

    rep(i, 4){
        if(count[i] == 2)
            count_all++;
    }

    if(count_all == 4)
        puts("Yes");
    else
        puts("No");

    return 0;
}
