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
    w(t)
    {
        int n;    //bascially printing unique elements from the array
        cin>>n;
        n=2*n;
        int arr[n];
        int crr[51]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            crr[arr[i]]++;
            if(crr[arr[i]]==1)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}
