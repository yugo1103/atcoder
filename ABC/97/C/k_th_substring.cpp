#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)

vector<string> subst;
string s;
ll k;

void dfs(ll dp, string st){
    subst.push_back(st);

    if(dp + 1 == s.size() || st.size() >= k){
        return;
    }
    st += s[dp + 1];
    dfs(dp + 1, st);
}

int main(void){
    cin >> s >> k;

    for(ll i = 0; i < s.size(); i++){
        string tmp{s[i]};
        dfs(i, tmp);
    }

    sort(subst.begin(), subst.end());

    string pre = "";
    ll count = 0;
    for(ll i = 0; i < subst.size(); i++){
        if(pre != subst[i]){
            count++;
            pre = subst[i];
        }
        if(count == k){
            cout << subst[i] << endl;
            return 0;
        }
    }

    return 0;
}
