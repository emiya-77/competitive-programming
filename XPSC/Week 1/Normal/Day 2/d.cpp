#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, digit_count=0;
    string ans;
    
    cin>>n;

    if(n>0) digit_count = floor(log10(n)+1);

    if(digit_count<4) ans.append(4-digit_count, '0');

    if(n>0) ans+=to_string(n);
    cout<<ans<<endl;
    return 0;
}