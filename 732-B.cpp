#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
//need k walks for two consecutive days
int main()
{
	fast
	int n, k; //n=days k=min no of walks
	cin >> n >> k;
	int arr[n];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum1 += arr[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] + arr[i] < k)
		{
			arr[i] += (k - (arr[i - 1] + arr[i]));
		}
	}
	for (int i = 0; i < n; i++)
	{
		sum2 += arr[i];
	}
	cout << sum2 - sum1 << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}




	return 0;
}
