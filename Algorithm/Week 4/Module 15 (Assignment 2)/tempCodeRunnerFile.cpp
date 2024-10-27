#include <bits/stdc++.h>
using namespace std;

int n, m, minArea=INT_MAX, area = 0;
bool vis[305][305];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
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
    vector<vector<char>> grid(n, vector<char>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char v;
            cin>>grid[i][j];
        }
    }

    n = grid.size();
    m = grid[0].size();

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                dfs(i, j, grid);
                if(area < minArea){
                    minArea = area;
                }
                area=0;
            }
        }
    }

    cout << minArea << endl;

    return 0;
}
