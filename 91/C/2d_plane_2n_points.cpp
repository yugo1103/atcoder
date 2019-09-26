#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    vector<pair<int, int>> x(n);
    vector<pair<int, int>> y(n);

    rep(i, n){
        cin  >> x[i].first >> x[i].second;
    }
    rep(i, n){
        cin  >> y[i].first >> y[i].second;
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int count = 0;

    rep(i, n){
        int ma = -10000000;
        int max_id = -1;
        rep(j, n){
            if(y[i].first > x[j].first && y[i].second > x[j].second){
                if(ma < x[j].second){
                    max_id = j;
                    ma = x[j].second;
                }
            }
        }

        if(max_id != -1){
            count++;
            x[max_id] = {1000000000000, 100000000000};
        }
    }

    cout << count << endl;
    return 0;
}
