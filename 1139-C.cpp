#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
const int N = 2e5 + 5;
const int MOD = 1e9 + 7;
int pow(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return ans;
}

vi adj[N];
bool visited[N];
int n, k, sz, ans = 0;

void dfs(int node)
{
    if (visited[node])
    {
        return;
    }
    sz++;
    visited[node] = true;
    for (auto it : adj[node])
    {
        dfs(it);
    }
}
//it is given we have n^k sequence of vertices and we to find good vertices we have n^k-p^k
int main()
{
    fast
    int n, k;
    cin >> n >> k;
    int ans = pow(n, k, MOD);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, x;
        cin >> u >> v >> x;
        if (x == 0)
        {
            adj[u].pb(v);   //making graph with red edges only
            adj[v].pb(u);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        sz = 0;
        dfs(i);
        ans -= pow(sz, k, MOD);
        ans += MOD;
        ans %= MOD;
    }

    cout << ans << "\n";

    return 0;
}
