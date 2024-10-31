#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, n, chef=0;
    cin>>x>>n;

    for(int i=x; i>0; i--){
        if(n){
            chef+=pow(2,i);
            n--;
        }else{
            chef-=pow(2,i);
        }
    }
    cout<<chef<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}