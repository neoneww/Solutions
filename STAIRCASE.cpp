#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
/*
    STAIR CASE PROBLEM
    suppose we have n steps on our stairs the no ways we needed to reach (n-1) steps +1 is the total no of ways to reach a particular number of steps
    f(n-1) is the no of ways to reach n-1 steps + 1 = total no of ways to reach some particular step  output
*/
int stair(int n)
{
    int* output = new int[n+1];
    output[1]=1;
    output[2]=2;
    for(int i=3;i<=n;i++)
    {
        output[i]=output[i-1]+output[i-2]; //basically it is the number of ways to reach n-1 and n-2 steps
    }

    int ans=output[n];
    delete []output;
    return ans;
}

int main()
{
    fast
    int n;
    cin>>n;
    cout<<stair(n);
    return 0;
}
