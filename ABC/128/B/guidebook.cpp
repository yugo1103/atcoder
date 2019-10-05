#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;

    cin >> n;
    pair<pair<string, int>, int> shop[n];

    int tmp_i;
    string tmp_s;
    rep(i, n){
        cin >> tmp_s >> tmp_i;
        shop[i] = {{tmp_s, -tmp_i}, i};
    }

    sort(shop, shop + n);

    rep(i, n)
        cout << shop[i].second + 1 << endl;

}
