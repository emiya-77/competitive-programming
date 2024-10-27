#include <bits/stdc++.h>
using namespace std;

int n, m, minArea=INT_MAX;
bool vis[305][305];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int area = 0;

bool valid(int ci, int cj)
{
    if (ci >= 1 && ci <= n && cj >= 1 && cj <= m);
}

void dfs(int si, int sj, vector<vector<char>> &grid)
{
    vis[si][sj] = true;
    area++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci, cj, grid);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<vector<char>> grid(n + 1, vector<char>(m + 1));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                area=0;
                dfs(i, j, grid);
                if(area < minArea){
                    minArea = area;
                }
            }
        }
    }

    if(minArea == INT_MAX){
        cout << -1 << endl;
    }else{
        cout << minArea << endl;
    }

    return 0;
}
