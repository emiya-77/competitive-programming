#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, z, total=0;
    cin>>x>>y>>z;

    int days = z*24*60;
    total = x*y;
    if(total<=days) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}