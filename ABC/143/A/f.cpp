#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    map<ll, ll> a;
    rep(i, n){
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }

    vector<ll> so;
    for(auto au: a){
        so.push_back(au.second);
    }

    sort(so.begin(), so.end(), greater<ll>());

    for(int i = 1; i <= n; i++){
        if(i > so.size()){
            cout << 0 << endl;
        }else{
            priority_queue<ll, vector<ll>, greater<ll>> qu;
            rep(j, i){
                qu.push(so[j]);
            }

            for(int j = i; j < so.size(); j++){
                ll tm = qu.top();
                qu.pop();
                qu.push(tm + so[j]);
            }

            cout << qu.top() << endl;
        }
    }
}
