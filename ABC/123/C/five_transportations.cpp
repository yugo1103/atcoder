#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)

int main(void){
    ll n, t[5];
    cin >> n;
    rep(i, 5)
        cin >> t[i];

//    ll t_num[6] = {n, 0, 0, 0, 0, 0};
//
//    ll count = 0;
//    while(t_num[5] != n){
//        ll current_num = 0;
//        for(ll i = 5; i > 0; i--){
//            if(t_num[i-1] >= t[i-1]){
//                t_num[i] += t[i-1];
//                t_num[i-1] -= t[i-1];
//            }else{
//                t_num[i] += min(t[i-1], t_num[i-1]);
//                t_num[i-1] -= min(t[i-1], t_num[i-1]);
//            }
//            current_num += t_num[i];
//            if(current_num == n)
//                break;
//        }
//        rep(i, 6){
//            cout << t_num[i] << " ";
//        }
//        cout << endl;
//        count++;
//    }

    sort(t, t + 5);
    ll count = 5 + ceil(n / (double)t[0]) - 1;
    cout << count << endl;
    return 0;
}
