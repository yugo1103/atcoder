#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;
    cin >> n >> k;

    ll count = 0;

    //全部同じ
    count++;

    //2つ同じ
    count += 3 * (n - 1);

    //全部違う
    rep(i, 1, k){
        if(i == k){
            continue;
        }else{
            if(i < k){
                count += (n - k) * 6;
            }else{
                count += (k - 1) * 6;
            }
        }
    }

    printf("%.10Lf", count / ld(n * n * n));
}
