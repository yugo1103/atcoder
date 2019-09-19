#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, x;
    cin >> n >> x;

    int l[n];
    rep(i, n){
        cin >> l[i];
    }

    int count = 0;
    int ans = 0;
    rep(i, n + 1){
        if(ans > x)
            break;
        ans += l[i];
        count++;
    }

    cout << count << endl;
    return 0;

}
