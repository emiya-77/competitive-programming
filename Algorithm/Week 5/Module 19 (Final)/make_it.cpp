#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[100005];

bool bfs(int target)
{
    queue<int> q;
    q.push(1);
    vis[1] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        if (par == target)
        {
            return true;
        }

        int childAdd = par + 3;
        int childMul = par * 2;

        if (childAdd <= target && !vis[childAdd])
        {
            q.push(childAdd);
            vis[childAdd] = true;
        }

        if (childMul <= target && !vis[childMul])
        {
            q.push(childMul);
            vis[childMul] = true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        memset(vis, false, sizeof(vis));

        if (bfs(x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
