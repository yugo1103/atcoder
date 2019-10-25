#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b;
    cin >> a >> b;
    a--;

    ll num1 = 0;
    ll tmp = a;

    while(tmp){
        tmp /= 2;
        num1++;
    }

    ll a_xor[num1];
    rep(i, num1){
        if(i == 0){
            if(ll(floor((a - 1) / 2.0)) % 2 == 0){
                a_xor[i] = 1;
            }else{
                a_xor[i] = 0;
            }
        }else{
            if(ll(floor(a / pow(2, i))) % 2 == 1 && a % 2 == 0){
                a_xor[i] = 1;
            }else{
                a_xor[i] = 0;
            }
        }
    }

    tmp = b;

    ll num2 = 0;
    while(tmp){
        tmp /= 2;
        num2++;
    }

    ll b_xor[num2];
    rep(i, num2){
        if(i == 0){
            if(ll(floor((b - 1) / 2.0)) % 2 == 0){
                b_xor[i] = 1;
            }else{
                b_xor[i] = 0;
            }
        }else{
            if(ll(floor(b / pow(2, i))) % 2 == 1 && b % 2 == 0){
                b_xor[i] = 1;
            }else{
                b_xor[i] = 0;
            }
        }
    }

    ll ans[num2];
    rep(i, num2){
        if(i < num1){
            if(a_xor[i] != b_xor[i]){
                ans[i] = 1;
            }else{
                ans[i] = 0;
            }
        }else{
            if(b_xor[i] == 1)
                ans[i] = 1;
            else
                ans[i] = 0;
        }
    }

    ll sum = 0;
    rep(i, num2){
        sum += pow(2, i) * ans[i];
    }
    cout << sum << endl;
    return 0;
}
