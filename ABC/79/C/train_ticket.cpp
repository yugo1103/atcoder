#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

ll op[3];
char num[4];
ll ans;
ll op_ans[3];

void calc(){
    char tmp[1];
    tmp[0] = char(num[0]);
    ans = atoi(tmp);
    rep(i, 3){
        if(op[i] == 0){
            tmp[0] = char(num[i+1]);
            ans += atoi(tmp);
        }else{
            tmp[0] = char(num[i+1]);
            ans -= atoi(tmp);
        }
    }
    if(ans == 7){
        op_ans[0] = op[0];
        op_ans[1] = op[1];
        op_ans[2] = op[2];
    }
}

void dfs(ll dp){
    if(dp == 3){
        calc();
        return;
    }
    op[dp] = 0;
    dfs(dp + 1);

    op[dp] = 1;
    dfs(dp + 1);
}

int main(void){
    cin >> num;

    dfs(0);

    rep(i, 3){
        cout << num[i];
        if(op_ans[i] == 0)
            cout << "+";
        else
            cout << "-";
    }

    cout << num[3] << "=7" << endl;
    return 0;
}
