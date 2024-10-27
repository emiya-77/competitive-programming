#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    while (q--) {
        ll l, r, sum1=0, sum2=0, ans=0;
        cin >> l >> r;

        ll l_val = (l+1)/2;
        ll r_val = (r+1)/2;

        sum1=(l_val*(l_val+1)/2)*2;
        sum2=(r_val*(r_val+1)/2)*2;

        ans=sum2-sum1;
        ans+=l_val*2;

        if(l%2==0){
            ans-=l_val;
        }
        if(r%2!=0){
            ans-=r_val;
        }
        
        cout << ans << '\n';
    }

    return 0;
}
