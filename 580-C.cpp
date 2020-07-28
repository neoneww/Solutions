#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long 
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
int cats=0,m=0,arr[100001];
vector<vector<int>> adj(100001);
bool visited[100001];


int dfs(int node)
{
    visited[node]=true;
    if(arr[node])
    {
        cats++;
    }
    else
    {
        cats=0;
    }

    if(cats>m)
    {
        return 0;
    }
    int kk=0,ans=0;
    for(int i=0;i<adj[node].size();i++)
    {
        if(!visited[adj[node][i]])
        {
            kk++;
            ans+=dfs(adj[node][i]);
        }
    }
    if(kk==0)ans++;

    return ans;
}

int main()
{
    int n; //n=nodes m=cats still okay for kefa
    cin>>n>>m;
    for(int i=0;i<=n;i++)
    {
        visited[i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int x,y; //x and y cities which are connected togther 
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    cout<<dfs(1)<<"\n";
}
