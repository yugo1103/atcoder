#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll count[9];
    rep(i, 9){
        count[i] = 0;
    }

    ll a[n];
    rep(i, n){
        cin >> a[i];
        if(a[i] <= 399){
            count[0]++;
        }else if(a[i] <= 799){
            count[1]++;
        }else if(a[i] <= 1199){
            count[2]++;
        }else if(a[i] <= 1599){
            count[3]++;
        }else if(a[i] <= 1999){
            count[4]++;
        }else if(a[i] <= 2399){
            count[5]++;
        }else if(a[i] <= 2799){
            count[6]++;
        }else if(a[i] <= 3199){
            count[7]++;
        }else{
            count[8]++;
        }
    }

    ll cou = 0;
    rep(i, 8){
        if(count[i]){
            cou++;
        }
    }

    ll cou_min = cou;
    if(count[8] && cou == 0){
        cou_min += 1;
    }

    cout << cou_min << " " << cou + count[8] << endl;
    return 0;

}
