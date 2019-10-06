#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, m;
    cin >> n >> m;
    pair<bool, bool> path[n];
    rep(i, n){
        path[i] = {false, false};
    }

    rep(i, m){
        ll tmp_a, tmp_b;
        cin >> tmp_a >> tmp_b;
        tmp_a--;
        tmp_b--;
        if(tmp_a == 0)
            path[tmp_b].first = true;
        if(tmp_b == 0)
            path[tmp_a].first = true;
        if(tmp_a == n-1)
            path[tmp_b].second = true;
        if(tmp_b == n-1)
            path[tmp_a].second = true;
    }

    rep(i, n){
        if(path[i].first == true && path[i].second == true){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }


    cout << "IMPOSSIBLE" << endl;
    return 0;
}
