#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, pay=0;
    cin>>x;

    int v = x/10;
    if(x%10!=0){
        pay = ((10-v)-1)*10;
    }else{
        pay = (10-v)*10;
    }

    cout<<pay<<'\n';
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