#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    
    vector<long long int> bags(n);
    
    for (int i = 0; i < n; i++) {
        cin >> bags[i];
    }

    sort(bags.begin(), bags.end(), greater<long long int>());

    long long int max = 0;
    long long int checkBall = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (checkBall > 0) {
            checkBall = min(bags[i], checkBall - 1);
            max += checkBall;
        }
    }

    cout << max << endl;

    return 0;
}
