#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,0);

    for(int i=1;i<=n;i++)
    {
        int temp=i;
        int minsteps= 1e6 + 1;
        while(temp!=0)
        {
            int di=temp%10;  //taking the last digit of the number
            temp/=10;        //and now removing the last digit of the number
            if(di==0)continue;
            minsteps=min(minsteps,1+dp[i-di]);
        }

        dp[i]=minsteps;
    }

    cout<<dp[n];


}
