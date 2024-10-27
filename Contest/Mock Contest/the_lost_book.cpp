#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, x;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cin >> x;
    int ans = -1;
    for(int i=0; i<n; i++){
        if(array[i]==x){
            ans=i;
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}
