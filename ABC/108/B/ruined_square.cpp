#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << x2 - (y2 - y1) << " " << y2 + (x2 - x1) << " " << x1 - (y2 - y1) << " " << y1 + (x2 - x1) << endl;

    return 0;

}
