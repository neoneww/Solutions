#include<bits/stdc++.h>
using namespace std;
int main()
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
        int brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        vector<int> crr;
        for(int i=0;i<n;i++)
        {
            if(brr[i]==0)
            {
                crr.push_back(arr[i]);
            }
        }
        sort(crr.begin(),crr.end());
        int tt=crr.size()-1;
        for(int i=0;i<n;i++)
        {
            if(brr[i]==0)
            {
                arr[i]=crr[tt];
                tt--;
            }
        }
 
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}
