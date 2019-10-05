#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll march[5] = {0, 0, 0, 0, 0};
    rep(i, n){
        string s;
        cin >> s;

        if(s[0] == 'M')
            march[0]++;
        if(s[0] == 'A')
            march[1]++;
        if(s[0] == 'R')
            march[2]++;
        if(s[0] == 'C')
            march[3]++;
        if(s[0] == 'H')
            march[4]++;
    }

    ll a [10]={0 ,0 ,0 ,0 ,0 ,0 ,1 ,1 ,1 ,2};
    ll b [10]={1 ,1 ,1 ,2 ,2 ,3 ,2 ,2 ,3 ,3};
    ll c [10]={2 ,3 ,4 ,3 ,4 ,4 ,3 ,4 ,4 ,4};

    ll count = 0;
    rep(i, 10){
        count += march[a[i]] * march[b[i]] * march[c[i]];
    }

    cout << count << endl;
    return 0;
}
