#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                total+=arr[i];
            }
            else if(arr[i]<0)
            {
                int kk = min(-1*arr[i],total);
                arr[i]+=kk;
                total-=kk;
            }
        }
        total = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                total+=abs(arr[i]);
            }
        }
        cout<<total<<"\n";
    }
}
