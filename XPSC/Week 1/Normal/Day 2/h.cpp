#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n, odd_num=0, ans=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n, greater<int>());

    int x;
    for(int i=0; i<n; i++){
        x=a[i];

        if(x%2==0){
            ans+=x;
        }else{
            if(odd_num){
                ans+=odd_num+x;
                odd_num=0;
            }else{
                odd_num = x;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}