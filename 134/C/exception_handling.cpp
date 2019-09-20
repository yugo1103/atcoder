#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int a[n], max[2] = {0, 0};
    rep(i, n){
        cin >> a[i];
        if(a[i] >= max[0]){
            max[1] = max[0];
            max[0] = a[i];
        }else if(a[i] > max[1]){
            max[1] = a[i];
        }
    }

    rep(i, n){
        if(a[i] == max[0])
            cout << max[1] << endl;
        else
            cout << max[0] << endl;
    }
    return 0;
}
