#include<bits/stdc++.h>
using namespace std;

int main(void){
    int p, q, r, ans;

    cin >> p >> q >> r;

    ans = p + q + r - max(p, max(q, r));

    cout << ans << endl;

    return 0;
}
