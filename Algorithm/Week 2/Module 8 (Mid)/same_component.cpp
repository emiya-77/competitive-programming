#include <bits/stdc++.h>
using namespace std;
char a[20][20];
bool vis[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m, ti, tj, flag=false;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
void dfs(int si, int sj)
{
    if(si==ti && sj==tj){
        flag=true;
        return;
    }
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '-')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    cin >> ti >> tj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}