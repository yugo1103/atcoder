#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, y;
    cin >> n >> y;

//    ll y_copy = y;
//    ll a_count, b_count, c_count;
//
//    a_count = y_copy / 10000;
//    y_copy %= 10000;
//
//    b_count = y_copy / 5000;
//    y_copy %= 5000;
//
//    c_count = y_copy / 1000;
//
//    while(a_count + b_count + c_count < n){
//        if(n - a_count - b_count - c_count >= 4){
//            b_count--;
//            c_count += 5;
//        }else{
//            a_count--;
//            b_count += 2;
//        }
//
//        if(b_count < 0){
//            a_count--;
//            b_count += 2;
//        }
//
//        if(a_count < 0){
//            cout << "-1 -1 -1" << endl;
//            return 0;
//        }
//    }
//
//    if(a_count + b_count + c_count != n || a_count * 10000 + b_count * 5000 + c_count * 1000 != y){
//        cout << "-1 -1 -1" << endl;
//        return 0;
//    }
//
//    cout << a_count << " " << b_count << " " << c_count << endl;
//    return 0;

    rep(i, n + 1){
        rep(j, n + 1){
            if(n - i - j < 0){
                continue;
            }
            ll sum = i * 10000 + j * 5000 + (n - i - j) * 1000;

            if(sum == y){
                cout << i << " " << j << " " << n - i - j << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;
    return 0;
}
