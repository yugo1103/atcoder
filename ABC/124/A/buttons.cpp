#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int a, b;
    cin >> a >> b;
    if(a == b)
        cout << max(a, b) * 2 << endl;
    else
        cout << max(a, b) * 2 - 1 << endl;
    return 0;
}
