#include<bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main()
{
    int n;
    cin>>n;
 
    int arr[n];
 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    int best_ans=arr[0];
    int current_ans=0;
 
    for(int i=0;i<n;i++)
    {
        current_ans+=arr[i];
        if(current_ans>best_ans)
        {
            best_ans=current_ans;
        }
        if(current_ans<0)
        {
            current_ans=0;
        }
    }
 
    cout<<best_ans;
}
