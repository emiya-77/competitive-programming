#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, chef=0, chefina=0, ans=0;
    string s1, s2;
    cin>>n;
    cin>>s1;
    cin>>s2;

    for(int i=0; i<n; i++){
        if(s1[i]=='R'){
            if(s2[i]=='R') continue;
            else if(s2[i]=='P') chefina++;
            else chef++;
        }else if(s1[i]=='P'){
            if(s2[i]=='P') continue;
            else if(s2[i]=='S') chefina++;
            else chef++;
        }else{
            if(s2[i]=='S') continue;
            else if(s2[i]=='R') chefina++;
            else chef++;
        }
    }

    while(chef<=chefina){
        ans++;
        chef++;
        chefina--;
    }
    cout<<ans<<'\n';
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