#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans=0;
    cin>>a>>b;
    for(int i=0; i<2; i++){
        if(a>b){
            ans+=a;
            a--;
        }else if(a<b){
            ans+=b;
            b--;
        }else{
            ans+=max(a,b);
        }
    }
    cout<<ans<<endl;
    return 0;
}