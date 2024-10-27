#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    while(c<=b){
        if(c>=a && c<=b){
            cout<<c<<endl;
            return 0;
        }
        c+=c;
    }
    cout<<-1<<endl;
    return 0;
}