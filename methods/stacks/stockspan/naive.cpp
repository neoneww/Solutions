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
        vector<int> pp;
        for(int i=0;i<n;i++)
        {
            int cnt=1;
            for(int j=n-1-i;j>0;j--)
            {
                if(arr[j-1]<=arr[n-1-i])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            pp.push_back(cnt);
        }
        for(int i=pp.size()-1;i>=0;i--)
        {
            cout<<pp[i]<<" ";
        }
        cout<<"\n";
    }
}
