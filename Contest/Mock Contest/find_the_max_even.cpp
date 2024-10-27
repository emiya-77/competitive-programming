#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    sort(array, array+n, greater<int>());

    int mx_even=0, ef=0, mx_odd=0, of=0;
    int ans=0;

    for(int i=0; i<n; i++){
        if(array[i]%2 == 0 && ef<2){
            mx_even += array[i];
            ef++;
        }
        if(array[i]%2 == 1 && of<2){
            mx_odd += array[i];
            of++;
        }
    }

    if(mx_odd%2==0)
        ans = max(mx_even, mx_odd);
    else
        ans = mx_even;

    cout<<ans<<endl;
    
    return 0;
}