#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, m;
    cin >> n >> m;

    vector<pair<ll, int>> shop;
    rep(i, n){
        ll tmp1;
        int tmp2;
        cin >> tmp1 >> tmp2;
        shop.push_back({tmp1, tmp2});
    }

    sort(shop.begin(), shop.end());

    int num = 0;
    ll cost = 0;
    rep(i, n){
        if(shop[i].second >=  m - num){
            cost += (m - num) * shop[i].first;
            cout << cost << endl;
            return 0;
        }else{
            cost += shop[i].first * shop[i].second;
            num += shop[i].second;
        }
    }
}
