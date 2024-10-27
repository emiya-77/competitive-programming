#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool vis[N], path[N];
vector<int> adj[N];
bool ans;

void dfs(int par){
    vis[par] = true;
    path[par] = true;
    // cout << par << " -> ";
    for(int child: adj[par]){
        if(vis[child] && path[child]){
            cout<<par<<" -> "<<child<<endl;
            ans = true;
        }
        if(!vis[child]){
            dfs(child);
            path[child] = false;
        }
    }
}

int main(){
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

    ans=false;
    memset(vis, false, sizeof(vis));
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    cout<<endl;
    if(ans) cout<<"Cicle Detected"<<endl;
    else cout<<"Cicle Not Detected"<<endl;
    return 0;
}