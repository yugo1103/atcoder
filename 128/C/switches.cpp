#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

vector<int> switches, p;
vector<vector<int>> s;
int cnt = 0;

void check(){
    rep(i, s.size()){
        int on_num = 0;
        rep(j, s[i].size()){
            if(switches[s[i][j]] == 1){
                on_num ++;
            }
        }
        if(on_num % 2 != p[i])
            return;
    }
    cnt++;
}

int cluc(int id){
    switches[id] = 0;
    if(id + 1 != switches.size())
        cluc(id + 1);
    else{
        check();
    }

    switches[id] = 1;
    if(id + 1 != switches.size())
        cluc(id + 1);
    else{
        check();
    }
}

int main(void){
    int n, m;
    cin >> n >> m;

    int k[m], tmp;

    rep(i, m){
        cin >> k[i];
        s.emplace_back();
        rep(j, k[i]){
            cin >> tmp;
            tmp--;
            s[i].push_back(tmp);
        }
    }

    rep(i, m){
        cin >> tmp;
        p.push_back(tmp);
    }

    rep(i, n)
        switches.push_back(0);

    cluc(0);

    cout << cnt << endl;
    return 0;
}
