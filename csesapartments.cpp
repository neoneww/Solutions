#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    
    cin>>n>>m>>k;
    
    vector<int> arr(n),brr(m);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    
    int i=0,j=0,cnt=0;
    
    while(i<n&&j<m)
    {
        if(abs(arr[i]-brr[j])<=k)
        {
            cnt++;
            i++;j++;
        }
        else if(arr[i]<brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    cout<<cnt;
}
