#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int p[n];
    rep(i, n)
        cin >> p[i];

    int count = 0;
    rep(i, n - 2){
        if((p[i+1] < p[i] && p[i+1] > p[i+2]) || (p[i+1] > p[i] && p[i+1] < p[i+2]))
            count++;
    }

    cout << count << endl;
    return 0;
}
