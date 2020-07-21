#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(200);
int level[200];

void dfs(int node,int parent)
{
    for(int i=0;i<adj[node].size();i++)  //assigning height to each node
    {
        if(adj[node][i]==parent)continue;
        level[adj[node][i]]=level[node]+1;
        dfs(adj[node][i],node);
    }
}

void solve()
{
    long prime1 = 1159658652789122730;
    long prime2 = 1988143630369455559;

    for(int i=0;i<200;i++)
    {
        adj[i].clear();
    }
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++)
    {
        level[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,1);

    for(int i=1;i<=n;i++)
    {
        if(level[i]%2!=0)
        {
            cout<<prime1<<" "<<" ";
        }
        else
        {
            cout<<prime2<<" ";
        }
    }
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
