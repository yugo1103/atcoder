#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)
bool m[3000][3000];
pair<ll,ll> cost[3000][3000];

int main(void){
    ll h, w;
    cin >> h >> w;
    ll ma = 0;

    for(int i = 3; i < h + 3; i++){
        for(int j = 3; j < w + 3; j++){
            char tmp;
            cin >> tmp;

            if(tmp == '#'){
                m[i][j] = false;
            }else{
                m[i][j] = true;
            }
        }
    }

    for(int i = 3; i < h + 3; i++){
        for(int j = 3; j < w + 3; j++){
            if(m[i][j]){
                if(m[i-1][j]){
                    cost[i][j].first = cost[i-1][j].first;
                }else{
                    for(int k = i; k < h + 3; k++){
                        if(m[k][j])
                            cost[i][j].first++;
                        else
                            break;
                    }
                }
                if(m[i][j-1]){
                    cost[i][j].second = cost[i][j-1].second;
                }else{
                    for(int k = j; k < w + 3; k++){
                        if(m[i][k])
                            cost[i][j].second++;
                        else
                            break;
                    }
                }
                ma = max(ma, cost[i][j].first + cost[i][j].second - 1);
            }
        }
    }

    cout << ma << endl;
    return 0;
}
