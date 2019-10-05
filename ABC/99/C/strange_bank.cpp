#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    vector<int> list;
    list.push_back(1);

    for(int i = 1; pow(9, i) <= n; i++){
        list.push_back(pow(9, i));
    }

    for(int i = 1; pow(6, i) <=  n; i++){
        list.push_back(pow(6, i));
    }

    sort(list.begin(), list.end());

    int count = 0;
    for(int i = list.size() - 1; i >= 0; i--){
        if(n / list[i] != 0){
            cout << list[i] << endl;
            count += n / list[i];
            n -= list[i] * (n / list[i]);
        }
        if(n == 0)
            break;
        cout << n << " " << count << endl;
    }

    cout << count << endl;
    return 0;
}
