#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    map<int, vector<ll>> city;
    int c, m;

    cin >> c >> m;

    pair<int, ll> input[m];
    rep(i, m){
        cin >> input[i].first >> input[i].second;
        city[input[i].first].push_back(input[i].second);
    }

    map<ll, int> id;

    int count = 0;
    for(auto v: city){
        sort(v.second.begin(), v.second.end());
        rep(i, v.second.size()){
            id[v.second[i]] = i + 1;
        }
    }

    rep(i, m){
        printf("%06d%06d\n", input[i].first, id[input[i].second]);
    }
}

