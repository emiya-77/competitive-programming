#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1, s2;
        int n, k, cnt=0, possible=true;
        cin>>n>>k;
        cin>>s1;
        cin>>s2;

        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                s1[i]=s2[i];
                if(cnt<k){
                    cnt++;
                }else{
                    possible=false;
                    break;
                }
            }
        }

        if(possible){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}