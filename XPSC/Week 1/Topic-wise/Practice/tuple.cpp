#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple<string,int,string> student = make_tuple("Rahim", 10, "017");
    tuple<string,int,string> student = {"Rahim", 10, "017"};

    // cout<<get<0>(student)<<" "<<get<1>(student)<<" "<<get<2>(student)<<'\n';
    auto[name,roll,phone]=student;
    cout<<name<<" "<<roll<<" "<<phone<<'\n';
    
    return 0;
}