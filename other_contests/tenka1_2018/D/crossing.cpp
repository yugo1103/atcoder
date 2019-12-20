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

    rep(i, 1, n + 1){
        if(i * (i + 1) / 2 == n){
            queue<ll> x;
            queue<ll> t[i + 1];
            rep(i, 0, n){
                x.push(i + 1);
            }
            cout << "Yes" << endl;
            cout << i + 1 << endl;
            rep(j, 0, i + 1){
                cout << i;
                rep(k, 0, j){
                    cout << " " << t[k].front();
                    t[k].pop();
                }
                rep(k, 0, i - j){
                    cout << " " << x.front();
                    t[j].push(x.front());
                    x.pop();
                }
                cout << endl;
            }
            cout << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
