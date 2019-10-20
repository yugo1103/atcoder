#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<ll> count;
    ll tmp = 0;

    if(s[0] == '0'){
        count.push_back(0);
    }
    rep(i, n){
        if(i == 0){
            tmp = 1;
        }else if(s[i] == s[i-1]){
            tmp += 1;
        }else{
            count.push_back(tmp);
            tmp = 1;
        }
    }
    count.push_back(tmp);
    if(s[s.size()-1] == '0'){
        count.push_back(0);
    }

    rep(i, count.size()){
        if(i != 0){
            count[i] += count[i-1];
        }
    }

    ll ma = 0;
    for(int i = k * 2; i < count.size(); i += 2){
        ll res = count[i];
        if(i - k * 2 - 1 >= 0){
            res = count[i] - count[i - k * 2 - 1];
        }
        ma = max(ma, res);
    }

    if(k * 2 >= count.size()){
        cout << s.size() << endl;
    }else{
        cout << ma << endl;
    }
    return 0;


}
