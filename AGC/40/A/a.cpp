#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){

    string s;
    cin >> s;
    vector<pair<ll, ll>> a;
    ll mi = 0;
    bool f = 0;
    if(s[0] == '<'){
        f = 0;
    }else{
        f = 1;
    }
    ll num = 0;
    rep(i, 0, s.length()){
        if(s[i] == '<'){
            if(f == 1){
                pair<ll, ll> tmp;
                f = 0;
                tmp.first = 1;
                tmp.second = num;
                a.push_back(tmp);
                num = 0;
            }
            num++;
        }else if(s[i] == '>'){
            if(f == 0){
                pair<ll, ll> tmp;
                f = 1;
                tmp.first = 0;
                tmp.second = num;
                a.push_back(tmp);
                num = 0;
            }
            num++;

        }
    }

    pair<ll, ll> tmp;
    tmp.first = f;
    tmp.second = num;
    a.push_back(tmp);

    ll sum = 0;
    rep(i, 0, a.size()){
        if(a[i].first == 0){
            rep(j, 0, a[i].second){
                sum += j;
            }
            if(i == a.size() - 1){
                sum += a[i].second;
            }
        }else if(a[i].first == 1){
            if(i == 0){
                sum += a[i].second;
            }else{
                sum += max(a[i-1].second, a[i].second);
            }
            rrep(j, a[i].second - 1, 0){
                sum += j;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
