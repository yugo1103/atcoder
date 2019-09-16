#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
vector<int> node[200000];
int cost[200000];

int op(int id, int parent=-1){
    for(auto &p : node[id]){
        if(p == parent)
            continue;
        cost[p] += cost[id];
        op(p, id);
    }
}
    

int main(void){
    int n, q;
    cin >> n >> q;

    int a, b;
    rep(i, n - 1){
        cin >> a >> b;
        a--;
        b--;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    int p, x;
    rep(i, q){
        cin >> p >> x;
        p--;
        cost[p] += x;
    }

    op(0);

    rep(i, n)
        cout << cost[i] << endl;
}

