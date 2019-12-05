#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll sx, sy, tx, ty;
    cin >> sy >> sx >> ty >> tx;

    rep(i, sx, tx){
        cout << 'U';
    }
    rep(i, sy, ty){
        cout << 'R';
    }

    rrep(i, tx, sx + 1){
        cout << 'D';
    }
    rrep(i, ty, sy + 1){
        cout << 'L';
    }

    cout << 'L';
    rep(i, sx, tx + 1){
        cout << 'U';
    }
    rep(i, sy - 1, ty){
        cout << 'R';
    }

    cout << 'D';

    cout << 'R';
    rrep(i, tx, sx){
        cout << 'D';
    }
    rrep(i, ty + 1, sy + 1){
        cout << 'L';
    }

    cout << 'U' << endl;
    return 0;
}
