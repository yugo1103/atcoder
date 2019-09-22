#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

string n;
int ans = 0;

void calc(string num){
    int c_3 = 0, c_5 = 0, c_7 = 0;
    rep(i, num.size()){
        if(num[i] == '3') c_3++;
        if(num[i] == '5') c_5++;
        if(num[i] == '7') c_7++;
    }
    if(c_3 == 0 || c_5 == 0 || c_7 == 0)
        return;
    else if(stoi(num) <= stoi(n)){
        ans++;
    }
}
void dfs(int dp, string num){
    if(dp == n.size()){
        return;
    }
    rep(i, 3){
        if(i == 0){
            num.push_back('3');
            calc(num);
            dfs(dp+1, num);
        }
        if(i == 1){
            num[dp] = '5';
            calc(num);
            dfs(dp+1, num);
        }
        if(i == 2){
            num[dp] = '7';
            calc(num);
            dfs(dp+1, num);
        }
    }
}
int main(void){
    cin >> n;
    dfs(0, "");
    cout << ans << endl;
    return 0;
}
