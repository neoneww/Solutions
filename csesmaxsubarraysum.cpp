#include<bits/stdc++.h>
#define int long long
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
 
int32_t main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int best_sum=0;
    best_sum = maxSubArraySum(arr,n);
    cout<<best_sum;
}
