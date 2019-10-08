#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, m;
    int ans;

    cin >> n >> m;

    map<ll, vector<ll>> part;
    rep(i, n){
        ll tmp_a, tmp_b;
        cin >> tmp_a >> tmp_b;

        if(!part.count(tmp_a)){
            part[tmp_a] = {};
        }
        part[tmp_a].push_back(tmp_b);
    }

    ll sum = 0;
    priority_queue<ll> cost;
    for(int i = 1; i <= m; i++){
        for(ll p : part[i]){
            cost.push(p);
        }
        if(cost.size() != 0){
            sum += cost.top();
            cost.pop();
        }
    }


    cout << sum << endl;
}
