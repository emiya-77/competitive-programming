#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge {
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

vector<ll> parent, rankArray;

void dsu_initialize(ll n) {
    parent.resize(n + 1, -1);
    rankArray.resize(n + 1, 1);
}

ll dsu_find(ll node) {
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union_by_rank(ll u, ll v) {
    ll leaderU = dsu_find(u);
    ll leaderV = dsu_find(v);

    if (leaderU != leaderV) {
        if (rankArray[leaderU] > rankArray[leaderV]) {
            parent[leaderV] = leaderU;
        } else if (rankArray[leaderU] < rankArray[leaderV]) {
            parent[leaderU] = leaderV;
        } else {
            parent[leaderV] = leaderU;
            rankArray[leaderU]++;
        }
    }
}

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    ll n, m;
    cin >> n >> m;

    dsu_initialize(n);

    vector<Edge> edges;

    for (ll i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        edges.emplace_back(u, v, w);
    }

    sort(edges.begin(), edges.end(), cmp);

    ll minCost = 0;
    ll edgeCount = 0;
    vector<ll> roadsToRemove;

    for (auto &edge : edges) {
        ll u = edge.u, v = edge.v, w = edge.w;

        ll leaderU = dsu_find(u);
        ll leaderV = dsu_find(v);

        if (leaderU != leaderV) {
            dsu_union_by_rank(u, v);
            minCost += w;
            edgeCount++;
        } else {
            roadsToRemove.push_back(w);
        }
    }

    if (edgeCount != n - 1) {
        cout << "Not Possible" << endl;
    } else {
        cout << roadsToRemove.size() << " " << minCost << endl;
    }

    return 0;
}
