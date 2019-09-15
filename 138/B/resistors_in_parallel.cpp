#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    double x = 0, ans;
    cin >> N;

    int A[N];
    for(int i=0;i<N;i++){cin >> A[i];}

    for(int i=0;i<N;i++){
        x = x + 1.0/A[i];
    }

    ans = 1/x;
    printf("%lf", ans);

}
