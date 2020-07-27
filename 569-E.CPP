#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int used[150150];
    memset(used, 0, sizeof(used));
    getarray(arr, n);
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++) //making the number small
    {
        int pp = max(1, arr[i] - 1);
        while (pp <= arr[i] + 1 && used[pp])
        {
            pp++;
        }
        if (pp <= arr[i] + 1)
        {
            used[pp] = 1;
            ans++;
        }
    }

    cout << ans << "\n";
}

int main()
{
    fast
    solve();
    return 0;
}
