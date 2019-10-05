#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    int num[n];
    num[0] = 0;
    rep(i, n-1){
        if(s[i] == 'A' && s[i+1] == 'C')
            num[i+1] = num[i] + 1;
        else
            num[i+1] = num[i];
    }

    int count[q];
    rep(i, q){
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        count[i] = num[r] - num[l];
    }

    rep(i, q)
        cout << count[i] << endl;
    return 0;
}
