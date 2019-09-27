#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    int ma = 0;
    int count = 0;
    rep(i, s.size()){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
            count++;
            ma = max(ma, count);
        }else{
            count = 0;
        }
    }

    cout << ma << endl;
    return 0;
}
