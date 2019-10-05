#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int k, x, s, e;
    cin >> k >> x;

    s = x - (k - 1);
    e = x + (k - 1);

    for(int i = s; i <= e; i++)
        cout << i << endl;
}
