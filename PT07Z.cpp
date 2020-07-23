#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;
//longest path in a tree
//approach is to run dfs two times first we will find the leaf node then from the leaf node we will find the farthest leaf node

vector<int>adj[100005];

bool vis[100005];
int m, mx;
void dfs(int s, int lvl) {
    if (lvl > mx) {
        mx = lvl;
        m = s;
    }
    vis[s] = true;
    for (int i = 0; i < adj[s].size(); i++) {
        if (vis[adj[s][i]] == true)continue;
        dfs(adj[s][i], lvl + 1);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    memset(vis, false, sizeof vis);
    mx = -1;
    dfs(1, 0);
    //cout<<m<<" "<<mx;
    memset(vis, false, sizeof vis);
    mx = -1;
    dfs(m, 0);
    cout << mx;
}
