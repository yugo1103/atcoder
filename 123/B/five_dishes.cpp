#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int a[5];
    rep(i, 5)
        cin >> a[i];

    int mi = 10;
    int count = 0;
    rep(i, 5){
        count += ceil(a[i] / 10.0) * 10;
        if(a[i] % 10 != 0)
            mi = min(mi, a[i] % 10);
    }

    cout << count + mi - 10 << endl;
    return 0;

}
