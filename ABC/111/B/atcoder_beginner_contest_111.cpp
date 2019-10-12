#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    for(int i = 1; i <= 10; i++){
        if(n <= i + i * 10 + i * 100){
            cout << i + i * 10 + i * 100 << endl;
            return 0;
        }
    }

    return 0;
}
