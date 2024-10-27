#include <bits/stdc++.h>
using namespace std;

// set: 1. sorts 2. removes duplicate 3. search

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--) // O(NlogN)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    if (s.count(10)) // O(logN)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}