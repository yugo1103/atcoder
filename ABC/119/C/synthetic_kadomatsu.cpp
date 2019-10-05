#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define INF 100000000
int n;
int A, B, C;
vector<int> l;
int mi = INF;

int calc(vector<int> v){
    int a = 0, b = 0, c = 0;
    int a_c = 0, b_c = 0, c_c = 0;
    int mp = 0;
    rep(i, n){
        if(v[i] == 0){
            a += l[i];
            a_c++;
        }
        if(v[i] == 1){
            b += l[i];
            b_c++;
        }
        if(v[i] == 2){
            c += l[i];
            c_c++;
        }
    }
    if(a_c == 0 || b_c == 0 || c_c == 0)
        return INF;
    else
        return (a_c + b_c + c_c - 3) * 10 + abs(A - a) + abs(B - b) + abs(C -c);
}

void dfs(int depth, vector<int> v){
    if(depth == n){
        mi = min(mi, calc(v));
        return;
    }

    rep(i, 4){
        v[depth] = i;
        dfs(depth + 1, v);
    }
}

int main(void){
    cin >> n >> A >> B >> C;

    rep(i, n){
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
    }
    vector<int> v(n);
    dfs(0, v);
    cout << mi << endl;
}
