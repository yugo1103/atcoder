#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int h[n];
    rep(i, n)
        cin >> h[i];

    int max = 0;
    rep(i, n){
        if(h[i] > max){
            max = h[i];
        }
        if(h[i] < max - 1){
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}
