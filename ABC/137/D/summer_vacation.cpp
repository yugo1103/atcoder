#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, m;
    int ans;
    priority_queue<int> reward[100005];

    cin >> n >> m;
    m--;

    int a, b, j, max_id, max_rew;
    rep(i, n){
        cin >> a >> b;
        a--;
        reward[a].push(b);
    }

    rep(i, m + 1){
        max_rew = 0;
        rep(j, i + 1){
            if(!reward[j].empty()){
                if(max_rew < reward[j].top()){
                    max_rew = reward[j].top();
                    max_id = j;
                }
            }
        }
        if(!reward[max_id].empty()){
            ans += reward[max_id].top();
            reward[max_id].pop();
        }
    }

    cout << ans << endl;
}
