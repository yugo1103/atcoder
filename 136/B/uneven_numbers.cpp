#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, len = 0, count;
    cin >> n;

    int x = n;
    while(x != 0){
        x = x / 10;
        len++;
    }

    rep(i, len){
        if((i + 1) % 2 == 1){
            if(i + 1 == len){
                count += n - pow(10, i) + 1;
            }else{
                count += pow(10, i + 1) - pow(10, i);
            }
        }
    }

    cout << count << endl;
}
