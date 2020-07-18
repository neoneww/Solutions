//--------https://codeforces.com/contest/1385/problem/C-------//
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
    w(t)          //bascially we want our array to be like a mountain
    {
        int n;
        cin>>n;
        int arr[n];
        getarray(arr,n);
        int p=n-1;
        while(p>0&&arr[p-1]>=arr[p])
        {
            p--;
        }
        while(p>0&&arr[p-1]<=arr[p])
        {
            p--;
        }

        cout<<p<<"\n";
    }

    return 0;
}
