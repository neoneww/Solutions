////---https://codeforces.com/problemset/problem/445/B------///
#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define vi vector<int>
using namespace std;
vi adj[1000000];ll visited[1000000];
long long binpow(long long a, long long b) {             //binary exponiation 
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void dfs(int node)
{
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++)
    {
        if(visited[adj[node][i]]==0)
        {
            dfs(adj[node][i]);
        }
    }
}
int main()       //bascially the main idea here is that the in each reaction cycle the danger is 2^(n-1) cause the first chemical is doing nothing then we can see that every next element the danger keeps on multiplying so for 1 cc the ans is 2^n-1 similarely we can fing the ans
{
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            cnt++;
            dfs(i);
        }
    }
    cout<<binpow(2,(n-cnt));
}
