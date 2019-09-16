#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    vector<string> str;
    int n, i, j;
    string s;
    map<string, int> mp;

    cin >> n;
    rep(i, n){
        cin >> s;
        str.push_back(s);
    }

    rep(i, n){
        sort(str[i].begin(), str[i].end());
        mp[str[i]]++;
    }
    
    ll count = 0;
    for(auto &p : mp){
        int s = p.second;
        count += (ll)s*(s-1)/2;
    }

    cout << count << endl;
}
