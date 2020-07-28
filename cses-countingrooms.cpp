#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;

int n, m; // dimensions of the 2d grid
bool visited[1002][1002];
char arr[1002][1002];
// a isvalid function it tells us if going to a certain cell is possible

bool isvalid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m) //going to cell with these coordinates is not possible
    {
        return false;
    }
    if (visited[x][y] == true || arr[x][y] == '#') //going to cell which was previousley visited and is "#" is false
    {
        return false;
    }

    return true;
}


void dfs(int x, int y)
{
    visited[x][y] = true;
    if (isvalid(x - 1, y))
    {
        dfs(x - 1, y);
    }
    if (isvalid(x, y + 1))
    {
        dfs(x, y + 1);
    }
    if (isvalid(x + 1, y))
    {
        dfs(x + 1, y);
    }
    if (isvalid(x, y - 1))
    {
        dfs(x, y - 1);
    }
}

int main()
{
    int cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == '.' && visited[i][j] == false)
            {
                dfs(i, j),cnt++;
            }
        }
    }

    cout << cnt;
}
