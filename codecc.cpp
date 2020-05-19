#include <bits/stdc++.h>
#define pb push_back
#define ll long long 
#define vi vector<int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    vi arr(n);
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll cnt=0,p=0,k=n-1;
    while(p<=k)
    {
    	if(arr[p]+arr[k]>x)
    	{
    		k--;
    	}
    	else
    	{
    		p++;
    		k--;
    	}
    	cnt++;
    }
    
    
    cout<<cnt<<"\n";


    return 0;
}
