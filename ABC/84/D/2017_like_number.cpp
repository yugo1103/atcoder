#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

#define MAX_N 100002

//素数列挙(エラストテネスの篩)
//計算量O(n log log n)
int prime[MAX_N];
bool is_prime[MAX_N + 1];
bool is_prime2[MAX_N + 1];

//n以下の素数の数を返す
int sieve(int n){
    int p = 0;
    for(int i = 0; i <= n; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            prime[p++] = i;
            for(int j = 2 * i; j <= n; j += i) is_prime[j] = false;
        }
    }
    return p;
}

int main(void){
    ll q;
    cin >> q;

    sieve(100002);

    rep(i, 0, MAX_N){
        if(is_prime[i] && is_prime[(i + 1) / 2]){
            is_prime2[i] = true;
        }else{
            is_prime2[i] = false;
        }
    }

    ll ans[MAX_N];
    ans[0] = 0;

    rep(i, 1, MAX_N){
        ans[i] = ans[i-1];
        if(is_prime2[i]){
            ans[i]++;
        }
    }

    pair<ll, ll> que[q];
    rep(i, 0, q){
        cin >> que[i].first >> que[i].second;
    }

    rep(i, 0, q){
        cout << ans[que[i].second] - ans[que[i].first - 1] << endl;
    }

}
