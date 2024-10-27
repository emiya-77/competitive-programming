#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"kibria", 80});
    mp.insert({"kib", 90});
    mp.insert({"ria", 70});

    mp["golam"] = 40; // O(logN)
    mp["ciel"] = 60;
    mp["emiya"] = 30;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << endl; // O(logN)
    }

    cout << mp["kibria"] << endl;

    if (mp.count("akib"))
    {
        cout << "Exits" << endl;
    }
    else
    {
        cout << "Doesn't Exist" << endl;
    }

    return 0;
}