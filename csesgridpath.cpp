#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int  main()
{
    int n;
    cin>>n; //dimension
    int arr[n+1][n+1];
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            char c;
            cin>>c;
            if(c=='.')
            {
                arr[i][j]=0;
            }
            else
            {
                arr[i][j]=1;
            }
        }
    }
    int dp[n+1][n+1];
 
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            if(i==n&&j==n)
            {
                dp[i][j]=1;
            }
            else
            {
                int first=(j==n) ? 0 : dp[i][j+1];
                int second=(i==n) ? 0 : dp[i+1][j];
                dp[i][j]=(first+second)%mod;
                if(arr[i][j])
                {
                    dp[i][j]=0;
                }
            }
        }
    }
    if(arr[n][n])
    {
        cout<<0;
    }
    else
    {
 
        cout<<dp[1][1];
    }
 
}
