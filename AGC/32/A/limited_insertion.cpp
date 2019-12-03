#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    vector<ll> b;
    vector<ll> a;
    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        tmp--;
        b.push_back(tmp);
    }

    while(b.size()){
        bool flag = true;
        rrep(i, b.size() - 1, 0){
            if(i == b[i]){
                a.push_back(b[i] + 1);
                b.erase(b.begin() + i);
                flag = false;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
            return 0;
        }
    }

    rrep(i, n - 1, 0){
        cout << a[i] << endl;
    }
    return 0;
}
