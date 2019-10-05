#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s, t;
    cin >> s >> t;

    int count1 = 0;
    int count2 = 0;
    map<char, int> c1;
    map<char, int> c2;
    rep(i, s.size()){
        if(c1[s[i]] == 0){
            count1++;
            c1[s[i]] = count1;
        }
        if(c2[t[i]] == 0){
            count2++;
            c2[t[i]] = count2;
        }

        if(c1[s[i]] != c2[t[i]]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
