#include <bits/stdc++.h>
using namespace std;

int n, m;
const vector<pair<int, int>> d = {{0, 1},{0, -1},{-1, 0},{1, 0}};

bool valid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}

void bfs(int startX, int startY, vector<vector<char>> &maze, vector<vector<int>> &parent)
{
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty())
    {
        int si, sj;
        pair<int, int> par = q.front();
        si = par.first;
        sj = par.second;
        q.pop();

        for (int i=0; i<4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if (valid(ci, cj) && maze[ci][cj] != '#' && !visited[ci][cj])
            {
                visited[ci][cj] = true;
                parent[ci][cj] = si * m + sj;
                q.push({ci, cj});
                if (maze[ci][cj] == 'D')
                {
                    return;
                }
            }
        }
    }
}

void mark_path(int startX, int startY, int endX, int endY, vector<vector<char>> &maze, vector<vector<int>> &parent)
{
    int m = maze[0].size();
    int pos = endX * m + endY;

    while (pos != startX * m + startY)
    {
        int x = pos / m;
        int y = pos % m;
        if(x==endX && y==endY){
            maze[x][y] = 'D';
        }else{
            maze[x][y] = 'X';
        }
        pos = parent[x][y];
    }
}

int main()
{
    cin >> n >> m;
    vector<vector<char>> maze(n, vector<char>(m));
    int startX, startY;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'R')
            {
                startX = i;
                startY = j;
            }
        }
    }

    vector<vector<int>> parent(n, vector<int>(m, -1));

    bfs(startX, startY, maze, parent);

    int endX = -1, endY = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == 'D')
            {
                endX = i;
                endY = j;
                break;
            }
        }
        if (endX != -1)
            break;
    }

    if (endX != -1)
    {
        mark_path(startX, startY, endX, endY, maze, parent);
    }

    for (auto &row : maze)
    {
        for (char cell : row)
        {
            cout << cell;
        }
        cout << endl;
    }

    return 0;
}
