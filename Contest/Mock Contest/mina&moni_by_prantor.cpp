#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> odd, even;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2) odd.push_back(x);
        else even.push_back(x);
    }
    sort(all(odd), greater<>());
    sort(all(even), greater<>());
    int sum = 0;
    if (odd.size() > 1) {
        sum = odd[0] + odd[1];
    }
    int sum1 = 0;
    if (even.size() > 0) {
        sum1 = even[0];
        if (even.size() > 1) sum1 += even[1];
    }
    cout << max({sum1, sum}) << endl;
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}