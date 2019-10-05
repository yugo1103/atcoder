#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    int count_0 = 0, count_1 = 0;
    rep(i, s.size()){
        if(s[i] == '0')
            count_0++;
        else
            count_1++;
    }
    cout << min(count_0, count_1) * 2 << endl;
    return 0;
}
