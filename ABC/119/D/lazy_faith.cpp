#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b, q;
    cin >> a >> b >> q;

    pair<ll, ll> sq[a + q], tq[b + q];
    pair<ll, ll> x[q];
    rep(i, a){
        cin >> sq[i].first;
        sq[i].second = 0;
    }
    rep(i, b){
        cin >> tq[i].first;
        tq[i].second = 1;
    }
    rep(i, q){
        ll tmp;
        cin >> tmp;
        sq[a + i].first = tmp;
        sq[a + i].second = 2;
        tq[b + i].first = tmp;
        tq[b + i].second = 2;
        x[i].first = tmp;
        x[i].second = i;
    }

    sort(x, x + q);
    sort(sq, sq + a + q);
    sort(tq, tq + b + q);

    ll sr[q], sl[q], tr[q], tl[q];
    ll count = 0;
    ll l = -100000000000;
    rep(i, a + q){
        if(sq[i].second == 0){
            l = sq[i].first;
        }else if(sq[i].second == 2){
            sl[count] = l;
            count++;
        }
    }
    ll r = -100000000000;
    count = q - 1;
    rep(i, a + q){
        if(sq[a + q - i - 1].second == 0){
            r = sq[a + q - i - 1].first;
        }else if(sq[a + q - i - 1].second == 2){
            sr[count] = r;
            count--;
        }
    }
    l = -100000000000;
    count = 0;
    rep(i, b + q){
        if(tq[i].second == 1){
            l = tq[i].first;
        }else if(tq[i].second == 2){
            tl[count] = l;
            count++;
        }
    }
    r = -100000000000;
    count = q - 1;
    rep(i, b + q){
        if(tq[b + q - i - 1].second == 1){
            r = tq[b + q - i - 1].first;
        }else if(tq[b + q - i - 1].second == 2){
            tr[count] = r;
            count--;
        }
    }

    pair<ll, ll> ans[q];
    rep(i, q){
        ans[i].second = 100000000000;
        if(sr[i] != -100000000000 && tl[i] != -100000000000){
            ans[i].second = sr[i] - tl[i] + min(x[i].first - tl[i], sr[i] - x[i].first);
        }
        if(tr[i] != -100000000000 && sl[i] != -100000000000){
            ans[i].second = min(ans[i].second, tr[i] - sl[i] + min(x[i].first - sl[i], tr[i] - x[i].first));
        }
        if(tl[i] != -100000000000 && sl[i] != -100000000000){
            ans[i].second = min(ans[i].second, max(x[i].first - tl[i], x[i].first - sl[i]));
        }
        if(tr[i] != -100000000000 && sr[i] != -100000000000){
            ans[i].second = min(ans[i].second, max(tr[i] - x[i].first, sr[i] - x[i].first));
        }
        ans[i].first = x[i].second;
    }

    sort(ans, ans + q);

    rep(i, q){
        cout << ans[i].second << endl;
    }
    return 0;
}
