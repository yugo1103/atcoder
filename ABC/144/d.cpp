#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ld a, b, x;
    cin >> a >> b >> x;

    x /= a;

    if(x <= a * b / 2.0){
        ld ans = atan2(b, 2 * x / b);
        ans = ans / M_PI * 180;
        if(ans < 0){
            ans += 360;
        }
        printf("%.12Lf", ans);
    }else{
        ld ans = atan2((2*b-2*x/a),a);
        ans = ans / M_PI * 180;
        if(ans < 0){
            ans += 360;
        }
        printf("%.12Lf", ans);
    }
}
