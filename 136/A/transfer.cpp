#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, c, ans;
    cin >> a >> b >> c;

    ans = max(c - (a - b), 0);

    cout << ans << endl;

}
