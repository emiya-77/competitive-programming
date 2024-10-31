#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin>>a>>b;

    if(b>=a) cout<<0<<'\n';
    else cout<<a-b<<'\n';
    
    return 0;
}