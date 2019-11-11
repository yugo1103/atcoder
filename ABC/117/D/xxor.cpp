#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;
    cin >> n >> k;

    ll tmp = k;
    pair<ll, ll> b[500];
    ll count = 0;
    while(tmp){
        if(tmp % 2 == 1){
            b[count].second++;
        }else{
            b[count].first++;
        }
        tmp /= 2;
        count++;
    }

    pair<ll, ll> a[500];
    rep(i, 0, n){
        ll tmp;
        cin >> tmp;

        rep(j, 0, 50){
            if(tmp % 2 == 1){
                a[j].second++;
            }else{
                a[j].first++;
            }
            tmp /= 2;
        }
    }


    ll sum = 0;
    ll flag = false;
    rrep(i, 499, 0){
        if(i <= count - 1){
            if(a[i].first <= a[i].second){
                sum += pow(2, i) * a[i].second;
                if(b[i].second) flag = true;
            }else if(flag || b[i].second){
                sum += pow(2, i) * a[i].first;
            }else{
                sum += pow(2, i) * a[i].second;
            }
        }else{
            sum += pow(2, i) * a[i].second;
        }
    }
    cout << sum << endl;
    return 0;
}
