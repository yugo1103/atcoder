#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    int check;
    if(2 * x == w && 2 * y == h)
        check = 1;
    else
        check = 0;

    printf("%.10f %d", w * h / 2.0, check);
    return 0;
}
