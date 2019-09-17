#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s, t;
    ll count;
    cin >> s >> t;

    vector<int> id[t.size()];
    rep(i, t.size()){
        bool found = false;
        rep(j, s.size()){
            if(t[i] == s[j]){
                id[i].push_back(j);
                found = true;
            }
        }
        if(!found){
            puts("-1");
            return 0;
        }
    }
    int current_id;
    rep(i, t.size()){
        bool ret = true;
        if(i == 0){
            count = id[i][0] + 1;
            current_id = id[i][0];
        }else{
            for(int x : id[i]){
                if(x > current_id){
                    count += x - current_id;
                    ret = false;
                    current_id = x;
                    break;
                }
            }
            if(ret)
                count += s.size() + id[i][0] - current_id;
                current_id = id[i][0];
        }
    }

    cout << count << endl;
}
