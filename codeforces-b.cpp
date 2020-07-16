//--------https://codeforces.com/contest/862/problem/B-----//
#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long 
#define pb push_back
using namespace std;
vi adj[1000001];
ll color[2];
//as we know tree is already Bipartite so wej ust need to check no of node in left set and no of nodes in right set
void dfs(int node,int pnode,int c)
{
    color[c]++;
    for(int i=0;i<adj[node].size();i++)
    {
        if(adj[node][i]!=pnode)       //bascially we just need to make sure don't get stuck in a cycle
        {
            dfs(adj[node][i],node,!c);
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
 
    dfs(1,0,0);
 
    cout<<color[0]*color[1]-(n-1)<<"\n";
}
