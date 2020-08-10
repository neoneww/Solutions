#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define int long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
/*
    no of ways we can have a sum n

    dp[i] = no of valid ways to get a sum of  i
*/
//dp[i]=no of ways to throw dice such that we get i as sum
//dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6]  //each dp[i] is no of ways of throwing i

int32_t main()
{
    fast
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int x=1;x<=6;x++)
        {
            if(x>i)
            {
                break;
            }

            dp[i]=(dp[i]+dp[i-x])%1000000007;
        }
    }

    cout<<dp[n];

    return 0;
}
