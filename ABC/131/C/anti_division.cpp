#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ll a, b, count = 0;
    ll c, d;

    cin >> a >> b >> c >> d;
    if(c < d)
        swap(c, d);

//    for(ll i = (a - 1) / c + 1; i * c <= b; i++)
//        count++;
//    for(ll i = (a - 1) / d + 1; i * d <= b; i++)
//        count++;
//
//    int x = c * d;
//    int r = c % d;
//    while(r != 0){
//        c = d;
//        d = r;
//        r = c % d;
//    }
//
//    for(ll i = (a - 1) / (x / d) + 1; i * (x / d) <= b; i++)
//        count--;

//    for(ll i = a; i <= b; i++){
//        if(i % c != 0){
//            if(i % d != 0){
//                count++;
//            }
//        }
//    }

    count += b / c - (a - 1) / c;
    count += b / d - (a - 1) / d;
    ll x = c * d;
    ll r = c % d;
    while(r != 0){
        c = d;
        d = r;
        r = c % d;
    }
    count -= b / (x / d) - (a - 1) / (x / d);
    cout << b - a + 1 - count << endl;
    return 0;

}
