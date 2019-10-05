#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, ans;

    cin >> a >> b;

    ans = max(a + b, max(a - b, a * b));

    cout << ans << endl;
}
