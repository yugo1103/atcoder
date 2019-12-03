#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ld n;
    cin >> n;

    rep(i, 1, 3501){
        rep(j, 1, 3501){
            ld w = n * i * j / ld(4 * i * j - n * i - n * j);
            if(w >= 1 && w <= 3500 && w == ll(w)){
                cout << i << " " << j << " " << w << endl;
                return 0;
            }
        }
    }
}
