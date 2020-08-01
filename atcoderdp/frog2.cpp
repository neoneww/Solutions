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
    ll n, k; //no of stones
    cin >> n >> k;
    ll height[n]; // height of each stone
    getarray(height, n); //input
    //dp array
    vector<ll> dp(n, 999999999);
    dp[0] = 0; //cause we are standing on the first element
    dp[1] = abs(height[1] - height[0]);
    //here we need to see the sub problem the best we can do by reaching the ith stone
    for (int i = 2; i < n; i++)
    {
        if (i - k >= 0)
        {
            for (int j = i - k; j < i; j++)  // bascially we are checking what is the best we can do till a certain position and we will then let the solution build from that state
            {
                dp[i] = min(abs(height[i] - height[j]) + dp[j], dp[i]); //the minimum cost of jumping from a step such that it is minimum
            }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                dp[i] = min(abs(height[i] - height[j]) + dp[j], dp[i]);
            }
        }
    }


    cout << dp[n - 1];

    return 0;
}
