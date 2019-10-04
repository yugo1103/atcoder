#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string year;
    cin >> year;

    if(year[5] == '0' && (year[6] == '4' ||year[6] == '3' ||year[6] == '2' || year[6] == '1')){
        puts("Heisei");
        return 0;
    }

    puts("TBD");
    return 0;
}
