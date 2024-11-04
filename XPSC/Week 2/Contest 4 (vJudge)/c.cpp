#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, count=0; cin>>n;
    n--;
    while(true){
        if(n>0) count++;
        else break;
        n-=7;
    }

    cout<<count<<'\n';
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