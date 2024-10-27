#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<ll> array(n);
    ll totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        totalSum += array[i];
    }

    ll leftSide = 0;

    for (int i = 0; i < n; i++)
    {
        leftSide += array[i];
        if (leftSide == totalSum - leftSide + array[i])
        {
            cout << leftSide << " " << i + 1 << endl;
            return 0;
        }
    }
    cout << "UNSTABLE" << endl;
    return 0;
}