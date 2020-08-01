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
    //n stones
    int n;
    cin >> n;
    int height[n]; //here we are given height of all n stones
    getarray(height, n);
    vector<int> dp(n, 0); //dp array
    dp[0] = 0; //since we are on 0 stone
    dp[1] = abs(height[1] - height[0]); //the best we can do to reach stone 2
    for (int i = 2; i < n; i++) // this is bascially a bottom up approach cause we building from the bottom to the top
    {
        dp[i] = min(dp[i - 1] + abs(height[i] - height[i - 1]), dp[i - 2] + abs(height[i] - height[i - 2]));
    }
    //bascially we are just checking the best we can do to reach at a particular stone i

    cout << dp[n - 1];



    return 0;
}
