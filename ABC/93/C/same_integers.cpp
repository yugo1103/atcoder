#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int a[3];
    int count = 0, ma = 0;

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    int b[2];
    b[0] = a[2] - a[0];
    b[1] = a[2] - a[1];

    int check = 0;

    if(b[0] % 2 == 1 && b[1] % 2 == 1){
        check = 1;
        b[0]--;
        b[1]--;
    }else if(b[0] % 2 == 1){
        check = 1;
        b[0]++;
    }else if(b[1] % 2 == 1){
        check = 1;
        b[1]++;
    }

    cout << b[0] / 2 + b[1] / 2 + check << endl;
    return 0;

}
