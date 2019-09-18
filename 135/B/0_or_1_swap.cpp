#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int p[n];
    rep(i, n){
        cin >> p[i];
    }

    int count = 0;
    rep(i, n){
        if(p[i] != i + 1)
            count++;
    }
    if(count <= 2)
        puts("YES");
    else
        puts("NO");
    return 0;
}
