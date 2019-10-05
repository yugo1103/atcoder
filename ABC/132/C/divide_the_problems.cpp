#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int d[n];
    rep(i, n)
        cin >> d[i];

    sort(d, d + n);

    int count = 0;
    for(int i = d[n / 2 - 1] + 1; i <= d[n / 2]; i++)
        count++;

    cout << count << endl;
    return 0;

}
