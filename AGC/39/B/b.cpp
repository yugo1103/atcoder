#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int par[300];
int rank[300];

void init(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        rank[i] = 0;
    }
}

int find(int x){
    if(par[x] == x){
        return x;
    }else{
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(rank[x] < rank[y]){
        par[x] = y;
    }else{
        par[y] = x;
        if(rank[x] == rank[y]) rank[x]++;
    }
}

bool same(int x, int y){
    return find(x) == find(y);
}

int main(void){
    int n;
    cin >> n;

    int s[n][n];
    rep(i, n){
        rep(j, n){
            cin >> s[i][j];
        }
    }

    while(true){

    }

}
