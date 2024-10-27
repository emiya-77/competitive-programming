#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int n = max(s1.size(), s2.size());
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (s2[i] == s1[j])
            {
                i++;
                if (i == n)
                {
                    break;
                }
            }
        }

        if (i == s2.size())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}