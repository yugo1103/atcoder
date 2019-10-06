#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll count_4 = 0, count_2 = 0;
    rep(i, n){
        ll tmp;
        cin >> tmp;
        if(tmp % 4 == 0){
            count_4++;
        }else if(tmp % 2 == 0){
            count_2++;
        }
    }

    count_4 += count_2 / 2;

    if(count_4 >= n / 2){
        puts("Yes\n");
    }else{
        puts("No\n");
    }

    return 0;
}
