#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;

int main()
{
    fast
    w(t)
    {
        int n, m, x;
        cin >> n >> m;
        int arr[1001] = {0}, brr[1001] = {0};
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            arr[x]++;
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> x;
            brr[x]++;
        }
        bool flag = 1;
        for (int i = 0; i < 1001; i++)
        {
            if (arr[i] && brr[i])
            {
                flag = 0;
                cout << "YES" << "\n";
                cout << "1" << " " << i << "\n";
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << "\n";
        }

    }
    return 0;
}
