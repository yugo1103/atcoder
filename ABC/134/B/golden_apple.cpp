#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n, d, ans;
    cin >> n >> d;

    ans = ceil(n / (2.0 * d + 1.0));

    cout << ans << endl;

    return 0;
}
