#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;

//no of program in team * min skill==x
//2 5 7 9 11 x==10

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    getarray(arr, n);
    sort(arr, arr + n);
    int i = n - 1, ans = 0, p = 1;
    while (i >= 0)
    {
        if (arr[i]*p >= x)
        {
            ans++;
            p = 0;
        }
        p++;
        i--;
    }

    cout << ans << "\n";
}


int main()
{
    fast
    w(t)
    {
        solve();
    }
    return 0;
}
