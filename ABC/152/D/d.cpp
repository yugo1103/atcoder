#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll c[10][10];
int main(void){
    ll n;
    cin >> n;

    ll count = 0;

    rep(i, 1, n + 1){
        string tmp = to_string(i);
        c[int(tmp[0]) - int('0')][int(tmp[tmp.size() - 1]) - int('0')]++;
    }

    rep(i, 0, 10){
        rep(j, 0, 10){
            count += c[i][j] * c[j][i];
        }
    }


    cout << count << endl;
    return 0;
}
