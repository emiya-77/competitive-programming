#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int main(){
    int s, t, count=0;
    cin>>s>>t;

    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            for(int k=0; k<=N; k++){
                if((i+j+k)<=s && (i*j*k)<=t){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}