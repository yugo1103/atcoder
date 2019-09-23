#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 1; i <= n; i++)

int main(void){
    int n, k;
    cin >> n >> k;

    if(k % 2 == 1)
        cout << ll(pow(n / k, 3)) << endl;
    else{
        int count = 0;
        rep(i, n){
            if(i % k == k / 2)
                count++;
        }
        cout << ll(pow(n / k, 3)) + ll(pow(count, 3)) << endl;
    }
}
