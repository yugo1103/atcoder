#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll n;

vector<ll> Eratosthenes(const int N){
    bool is_prime[N];
    vector<ll> P;
    for(int i = 0; i <= N; i++){
        is_prime[i] = true;//初期化
    }
    ll count = 0;
    for(int i = 2; i <= N; i++){
        if(is_prime[i]){
            for(int j = 2 * i; j <= N; j += i){
                is_prime[j] = false;
            }
            if(i % 5 == 1){
                P.emplace_back(i);
                count++;
                if(count == n){
                    return P;
                }
            }
        }
    }
}

int main(void){
    cin >> n;

    vector<ll> ans = Eratosthenes(1000000);
    fore(a, ans){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
