#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) {
    if (a<b) {
        a = b;
        return 1;
    }
    return 0;
}
template<class T>bool chmin(T &a, const T &b) {
    if (b<a) {
        a = b;
        return 1;
    }
    return 0;
}

struct TopologicalSort {
    vector<vector<int>> E;
    TopologicalSort(int N) { E.resize(N); }
    void add_edge(int a, int b) { E[a].push_back(b); }
    bool visit(int v, vector<int>& order, vector<int>& color) {
        color[v] = 1;
        for (int u : E[v]) {
            if (color[u] == 2) continue; if (color[u] == 1) return false;
            if (!visit(u, order, color)) return false;
        } order.push_back(v); color[v] = 2; return true;
    }
    bool sort(vector<int> &order) {
        int n = E.size(); vector<int> color(n);
        for (int u = 0; u < n; u++)
            if (!color[u] && !visit(u, order, color)) return false;
        reverse(order.begin(), order.end()); return true;
    }
};

int N, M;
vector<int> E[101010];
int dp[101010];
int main(void) {
    cin >> N >> M;
    TopologicalSort ts(N);
    rep(i, 0, M) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        ts.add_edge(x, y);
        E[x].push_back(y);
    }
    vector<int> ord;
    ts.sort(ord);

    fore(cu, ord)
        fore(to, E[cu])
            chmax(dp[to], dp[cu] + 1);
    int ans = 0;
    rep(i, 0, N)
        chmax(ans, dp[i]);
    cout << ans << endl;
};
