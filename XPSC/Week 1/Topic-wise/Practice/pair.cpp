#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = {"Karim", 10};
    // pair<string, int> student = make_pair("Rahim", 10);
    // cout<<student.first<<" "<<student.second<<'\n';

    // auto [name, roll] = student;
    // cout<<name<<" "<<roll<<'\n';

    // student.first = "kib";
    // cout<<student.first<<" "<<student.second<<'\n';

    int n;
    cin>>n;
    pair<string, int> students[n];
    for(int i=0; i<n; i++){
        cin>>students[i].first>>students[i].second;
    }

    for(auto [x,y] : students){
        cout<<x<<" "<<y<<'\n';
    }

    // FOR STORING MORE THAN 2 VALUES IN A PAIR
    pair<string, pair<int,string>> p = {"Kibria", {7, "01305"}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<'\n';
    
    return 0;
}