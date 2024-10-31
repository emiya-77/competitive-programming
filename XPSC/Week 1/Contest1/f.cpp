#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, swap1=-1, swap2=-1;
    string s1, s2;
    cin>>n>>k;
    cin>>s1;
    cin>>s2;

    for(int i=0; i<n; i++){
        if(s1[i]!=s2[i]){
            if(swap1==-1){
                swap1=i;
            }else{
                swap2=i;
                int tmp =s1[swap1];
                s1[swap1] = s1[swap2];
                s1[swap2] = tmp;
                k--;
                i=0;
                swap1=-1;
                swap2=-1;
            }
        }
        if(!k){
            break;
        }
    }
    
    if(s1==s2){
        if(n==2){
            if(k%2==0){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }else{
            cout<<"YES"<<'\n';
        }
    }else{
        cout<<"NO"<<'\n';
    }

}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}