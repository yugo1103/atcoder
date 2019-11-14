#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll l;
    cin >> l;

    vector<pair<ll, ll>> path[60];
    ll current_num = 2;
    ll last_v = 1;
    ll path_num = 2;
    path[0].push_back(pair<ll, ll>(1,0));
    path[0].push_back(pair<ll, ll>(1,1));

    ll tmp = l;
    vector<ll> seq;
    seq.push_back(tmp);
    if(tmp % 2 == 1){
        tmp--;
        seq.push_back(tmp);
    }
    while(tmp != 2){
        tmp /= 2;
        seq.push_back(tmp);
        if(tmp % 2 == 1){
            tmp--;
            seq.push_back(tmp);
        }
    }

    rrep(x, seq.size()-2, 0){
        if(current_num == seq[x] / 2.0){
            current_num *= 2;
            rep(i, 0, 60){
                fore(a, path[i]){
                    a.second *= 2;
                }
            }
            path[last_v].push_back(pair<ll, ll>(last_v + 1,0));
            path[last_v].push_back(pair<ll, ll>(last_v + 1,1));
            last_v++;
            path_num += 2;
        }else{
            current_num++;
            path[0].push_back(pair<ll, ll>(last_v, current_num - 1));
            path_num++;
        }
    }

    cout << last_v + 1 << " " << path_num << endl;
    rep(i, 0, 60){
        fore(a, path[i]){
            cout << i + 1 << " " << a.first + 1 << " " << a.second << endl;
        }
    }

    return 0;
}
