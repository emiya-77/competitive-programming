#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<char> s(n);

    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    
    while(true){
        if(s.front()=='W') s.erase(s.begin());
        else if(s.back()=='W') s.pop_back();
        else break;
    }

    cout<<s.size()<<'\n';
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