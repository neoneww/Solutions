#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long 
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
bool visited[501][501];

// dfs on a 2d grid  - just make all the cell as nodes and apply dfs 
int n,m;

bool isvalid(int x,int y)   //function to check if the given cell is valid or if it has been already visited
{
    if(x<1||x>n||y<1||y>m)
    {
        return false;
    }

    if(visited[x][y])
    {
        return false;
    }

    return true;
}
void dfs(int x,int y)
{
    visited[x][y]=true;

    cout<<x<<" "<<y<<"\n";

    if(isvalid(x-1,y))
    {
        dfs(x-1,y);
    }

    if(isvalid(x,y+1))
    {
        dfs(x,y+1);
    }

    if(isvalid(x+1,y))
    {
        dfs(x+1,y);
    }

    if(isvalid(x,y-1))
    {
        dfs(x,y-1);
    }
}

