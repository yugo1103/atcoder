#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    cin >> s;

    vector<pair<ll, ll>> p;

    ll a[s.size()];
    ll count = 1;
    ll flag = 0;
    rep(i, s.size() - 1){
        if(s[i] == 'R' && s[i+1] == 'R' && flag == 0){
            count++;
            a[i] = 0;
        }
        if(s[i] == 'R' && s[i+1] == 'L' && flag == 0){
            p.push_back({count, 0});
            count = 1;
            flag = 1;
            a[i] = -1;
        }
        if(s[i] == 'L' && s[i+1] == 'L' && flag == 1){
            count++;
            a[i] = 0;
        }
        if(s[i] == 'L' && s[i+1] == 'R' && flag == 1){
            p[p.size() - 1].second = count;
            count = 1;
            flag = 0;
            a[i] = 0;
        }
    }
    a[s.size() - 1] = 0;
    p[p.size() - 1].second = count;

    ll c = 0;
    rep(i, s.size()){
        if(a[i] == -1){
            if(p[c].first % 2 == p[c].second % 2){
                a[i] = (p[c].first + p[c].second) / 2;
                a[i+1] = a[i];
            }else if(p[c].first % 2 == 0){
                a[i] = (p[c].first + p[c].second) / 2;
                a[i+1] = a[i] + 1;
            }else if(p[c].first % 2 != 0){
                a[i+1] = (p[c].first + p[c].second) / 2;
                a[i] = a[i+1] + 1;
            }
            c++;
        }
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
