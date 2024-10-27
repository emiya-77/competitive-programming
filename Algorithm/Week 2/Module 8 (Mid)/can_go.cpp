#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<pair<int, int>> v[N];
int dis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();

        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {

                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        v[a].push_back({b, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    int s, t;

    cin >> s;
    dijkstra(s);

    cin >> t;
    while(t--){
        int d, dw;
        cin >> d >> dw;
        if(dis[d]<=dw) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << "-> " << dis[i] << endl;
    // }

    return 0;
}
