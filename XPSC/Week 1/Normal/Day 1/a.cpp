#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans=0;
    cin>>a>>b;

    ans = b-a;
    if(ans>0){
        cout<<ans+1<<endl;
    }else{
        cout<<0<<endl;
    }

    return 0;
}