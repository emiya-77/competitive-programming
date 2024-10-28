#include <bits/stdc++.h>
using namespace std;

int main(){
    int min=INT_MAX;
    string s;
    cin>>s;

    for(int i=0; i<26; i++){
        if('a'+i<min && s.find('a'+i)==string::npos){
            min='a'+i;
        }
    }

    if(min==INT_MAX) cout<<"None"<<endl;
    else cout<<static_cast<char>(min)<<endl;
    return 0;
}