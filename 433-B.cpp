#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr,brr+n);
    int sum1[n]={0},sum2[n]={0};
    sum1[0]=arr[0];
    sum2[0]=brr[0];
    for(int i=1;i<n;i++)
    {
        sum1[i]=arr[i]+sum1[i-1];
        sum2[i]=brr[i]+sum2[i-1];
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int type,l,r;
        cin>>type>>l>>r;
        l--;r--;
        if(type==1)
        {
            if(l!=0)
            {
                cout<<sum1[r]-sum1[l-1]<<"\n";
            }
            else
            {
                cout<<sum1[r]<<"\n";
            }
        }
        else
        {
             if(l!=0)
            {
                cout<<sum2[r]-sum2[l-1]<<"\n";
            }
            else
            {
                cout<<sum2[r]<<"\n";
            }
        }
    }

}
