#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    vector<ll> a;
    vector<ll> b;
    vector<ll> a_ori;
    vector<ll> b_ori;
    vector<ll> b_af;

    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
        a_ori.push_back(tmp);
    }

    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        b.push_back(tmp);
        b_ori.push_back(tmp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    rep(i, 0, n){
        auto itr = lower_bound(b.begin(), b.end(), a[i]);
        if(itr == b.end()){
            cout << "No" << endl;
            return 0;
        }
        b_af.push_back(*itr);
        b.erase(itr);
    }

    rep(i, 1, n){
        if(a[i-1] <= b_af[i] && a[i] <= b_af[i-1]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i, 0, n){
        if(a_ori[i] == b_ori[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
