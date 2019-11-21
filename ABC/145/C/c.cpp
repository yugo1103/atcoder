#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
pair<ll, ll> x[8];

ll n;
ld sum = 0;

void calc(vector<ll> count){
    rep(i, 0, n-1){
        sum += sqrt(pow(x[count[i+1]].first - x[count[i]].first, 2) + pow(x[count[i+1]].second - x[count[i]].second, 2));
    }
}

void dfs(ll dp, vector<ll> count){
    if(dp == n){
        calc(count);
    }else{
        rep(i, 0, n){
            if(find(count.begin(), count.end(), i) == count.end()){
                vector<ll> tmp = count;
                tmp.push_back(i);
                dfs(dp + 1, tmp);
            }
        }
    }
}

int main(void){
    cin >> n;

    rep(i, 0, n){
        cin >> x[i].first >> x[i].second;
    }

    vector<ll> ans;
    dfs(0, ans);

    ld num = 1;
    ll tmp = n;
    rep(i, 0, n-1){
        num *= tmp;
        tmp --;
    }

    printf("%.10Lf", sum / num);
    return 0;
}
