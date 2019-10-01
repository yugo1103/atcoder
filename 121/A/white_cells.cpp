#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int h, w;
    int H, W;

    cin >> H >> W >> h >> w;

    int count = 0;
    rep(i, H - h)
        rep(j, W - w)
            count++;
    cout << count << endl;
}
