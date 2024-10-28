#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    cin>>a>>b>>t;

    int sec;
    sec=floor((t+0.5)/a);
    cout<<sec*b<<endl;
    return 0;
}