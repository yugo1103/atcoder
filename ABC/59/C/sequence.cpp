#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll count_1 = 0;
    ll sum = 0;
    rep(i, n){
        sum += a[i];

        if(sum == 0){
            count_1++;
            if(i % 2 == 0){
                sum = 1;
            }else{
                sum = -1;
            }
        }else if(sum != abs(sum) && i % 2 == 0){
            count_1 += 1 - sum;
            sum = 1;
        }else if(sum == abs(sum) && i % 2 == 1){
            count_1 += sum + 1;
            sum = -1;
        }
    }

    ll count_2 = 0;
    sum = 0;
    rep(i, n){
        sum += a[i];

        if(sum == 0){
            count_2++;
            if(i % 2 == 0){
                sum = -1;
            }else{
                sum = 1;
            }
        }else if(sum == abs(sum) && i % 2 == 0){
            count_2 += sum + 1;
            sum = -1;
        }else if(sum != abs(sum) && i % 2 == 1){
            count_2 += 1 - sum;
            sum = 1;
        }
    }

    cout << min(count_1, count_2) << endl;
    return 0;
}
