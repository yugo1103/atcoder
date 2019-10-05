#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    map<int, int> m1;
    map<int, int> m2;
    pair<int, int> max1;
    pair<int, int> max1_;
    pair<int, int> max2;
    pair<int, int> max2_;

    cin >> n;

    int tmp;
    max1 = {0, 0};
    max2 = {0, 0};
    rep(i, n){
        cin >> tmp;
        if(i % 2 == 1){
            m1[tmp]++;
            if(max1.second <= m1[tmp]){
                if(max1.first == tmp)
                    max1.second = m1[tmp];
                else{
                    max1_ = {max1.first, max1.second};
                    max1 = {tmp, m1[tmp]};
                }
            }else if(max1_.second <= m1[tmp]){
                if(max1.first == tmp)
                    max1_.second = m1[tmp];
                else{
                    max1_ = {tmp, m1[tmp]};
                }
            }
        }
        else{
            m2[tmp]++;
            if(max2.second <= m2[tmp]){
                if(max2.first == tmp)
                    max2.second = m2[tmp];
                else{
                    max2_ = {max2.first, max2.second};
                    max2 = {tmp, m2[tmp]};
                }
            }else if(max2_.second <= m2[tmp]){
                if(max2.first == tmp)
                    max2_.second = m2[tmp];
                else{
                    max2_ = {tmp, m2[tmp]};
                }
            }
        }
    }

    if(max1.first != max2.first){
        cout << n - max1.second - max2.second;
    }else{
        cout << min(n - max1.second - max2_.second, n - max1_.second -max2.second);
    }
}
