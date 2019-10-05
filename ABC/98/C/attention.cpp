#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    string s;

    cin >> n >> s;

    int count_w[n];
    int count_e[n];

    count_w[0] = 0;
    count_e[n-1] = 0;

    rep(i, n - 1){
        if(s[i] == 'W')
            count_w[i]++;
        count_w[i+1] = count_w[i];
    }

    for(int i = n - 1; i > 0; i--){
        if(s[i] == 'E')
            count_e[i]++;
        count_e[i-1] = count_e[i];
    }

    int mi = 3000000;

    rep(i, n){
        mi = min(mi, count_w[i] + count_e[i]);
    }

    cout << mi - 1 << endl;

    return 0;
}
