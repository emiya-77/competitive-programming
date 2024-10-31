#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin>>n;
    // // vector<int> v(n);
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     // cin>>v[i];

    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<'\n';

    // v.pop_back();
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<'\n';

    // cout<<v.front()<<'\n';
    // cout<<v.back()<<'\n';

    // cout<<v.empty()<<'\n';
    // v.clear();
    // cout<<v.empty()<<'\n';

    // ASSIGN
    // int n;
    // cin>>n;
    // // vector<int> v(n, 5); // O(n)
    // vector<int> v;
    // v.assign(n, 5);
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<'\n';

    // RESIZE
    // vector<int> v;
    // v.resize(4);
    // for(int i=0; i<v.size(); i++){
    //     cin>>v[i];
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<'\n';

    // ITERATORS - begin, end, rbegin, rend
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // auto it = v.begin();
    // cout<<*it<<'\n';
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<'\n';
    cout<<*--v.end()<<'\n';

    // REVERSE
    reverse(v.begin(), v.end());

    // SORT - O(NlogN)
    sort(v.begin(), v.end());

    // REVERSE SORT - O(NlogN)
    sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end(), greater<int>());

    // RANGE BASED FOR LOOP
    for(auto value: v){
        cout<<value<<" ";
    }
    cout<<'\n';

    // MIN MAX ELEMENT - gives the first max element position iterator
    auto mn = min_element(v.begin(), v.end());
    auto mx = max_element(v.begin(), v.end());

    cout<<*mn<<" "<<*mx<<'\n';

    // MAX ELEMENT POSITION
    int maxElementPosition = mx - v.begin();
    cout<<maxElementPosition<<'\n';

    return 0;
}