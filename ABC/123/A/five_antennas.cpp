#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int a[5];
    int k;

    rep(i, 5)
        cin >> a[i];
    cin >> k;

    if(a[4] - a[0] > k)
        cout << ":(" << endl;
    else
        cout << "Yay!" << endl;

    return 0;

}
