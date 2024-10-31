#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s=0, d=0;
    bool t=true;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    while(!v.empty()){
        int f, l;
        f=v.front();
        l=v.back();

        if(t){
            if(f>l){
                s+=f;
                v.erase(v.begin());
            }else{
                s+=l;
                v.pop_back();
            }
            t=!t;
        }else{
            if(f>l){
                d+=f;
                v.erase(v.begin());
            }else{
                d+=l;
                v.pop_back();
            }
            t=!t;
        }
    }

    cout<<s<<" "<<d<<'\n';
    
    return 0;
}