//https://codeforces.com/problemset/problem/977/E//
#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;
vi adj[200001];
int visited[200001],cnt=0;
void dfs(int source)
{
    visited[source]=1;
    if(adj[source].size()!=2)
    {
        cnt=0;
    }
    for(int i=0;i<adj[source].size();i++)
    {
        if(visited[adj[source][i]]==0)
        {
            dfs(adj[source][i]);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            cnt=1;
            dfs(i);
            ans+=cnt;
        }
    }

    cout<<ans<<"\n";

}
