#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll h, w;
    cin >> h >> w;

    ll a[h][w];
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> a[i][j];
        }
    }
    vector<ll> ans1;
    vector<ll> ans2;
    vector<ll> ans3;
    vector<ll> ans4;

    ll count = 0;
    rep(i, 0, h){
        if(count % 2 == 0){
            rep(j, 0, w-1){
                if(a[i][j] % 2 != 0){
                    a[i][j]--;
                    a[i][j+1]++;
                    ans1.push_back(i+1);
                    ans2.push_back(j+1);
                    ans3.push_back(i+1);
                    ans4.push_back(j+2);
                }
            }
            if(a[i][w-1] % 2 != 0 && i != h-1){
                a[i][w-1]--;
                a[i+1][w-1]++;
                    ans1.push_back(i+1);
                    ans2.push_back(w);
                    ans3.push_back(i+2);
                    ans4.push_back(w);
            }
        }
        if(count % 2 == 1){
            rrep(j, w-1, 1){
                if(a[i][j] % 2 != 0){
                    a[i][j]--;
                    a[i][j-1]++;
                    ans1.push_back(i+1);
                    ans2.push_back(j+1);
                    ans3.push_back(i+1);
                    ans4.push_back(j);
                }
            }
            if(a[i][0] % 2 != 0 && i != h-1){
                a[i][0]--;
                a[i+1][0]++;
                    ans1.push_back(i+1);
                    ans2.push_back(1);
                    ans3.push_back(i+2);
                    ans4.push_back(1);
            }
        }
        count++;
    }

    cout << ans1.size() << endl;
    rep(i, 0, ans1.size()){
        cout << ans1[i] << " " << ans2[i] << " " << ans3[i] << " " << ans4[i] << endl;
    }
    return 0;
}
