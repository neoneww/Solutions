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
	//dp[day][0] is rest dp[day][1] is contest dp[day][2] is gym (we can rest on any day) if day = 3 we can do anything
	int n;
	cin >> n;
	int arr[n], dp[101][3];
	getarray(arr, n);
	for (int i = 0; i <= n; i++)
	{
		dp[i][1] = dp[i][0] = dp[i][2] = 1000;
	}

	dp[0][0] = 1;
	//if we can do something other than rest on the first day
	if (arr[0] == 1 || arr[0] == 3)
	{
		dp[0][1] = 0;
	}

	if (arr[0] == 2 || arr[0] == 3)
	{
		dp[0][2] = 0;
	}

	//we can rest consecutively any number of time
	//bascially we are checking the best we can do reach at any particualar position bascialy the min no of days we sleep
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = 1 + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));

		if (arr[i] == 1 || arr[i] == 3)
		{
			dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
		}	
		//same thing again we are checking the best we can do at some certain day
		if (arr[i] == 2 || arr[i] == 3)
		{
			dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
		}
	}

	cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));

	return 0;
}
