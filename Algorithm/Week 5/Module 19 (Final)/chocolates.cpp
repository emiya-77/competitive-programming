#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        if (total % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int s = total / 2;
        bool dp[1001]; 
        memset(dp, false, sizeof(dp)); 

        dp[0] = true;

        for (int i = 0; i < n; i++) {
            for (int j = s; j >= a[i]; j--) {
                dp[j] = dp[j] || dp[j - a[i]];
            }
        }

        if(dp[s]==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
