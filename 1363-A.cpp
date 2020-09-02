#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {

        int n=0,x=0;

        cin>>n>>x;  //no of elements and no of elements we can choose

        int a=0,b=0;  //a = even b = odd

        for(int i=0;i<n;i++)
        {
            int x;

            cin>>x;

            if(x%2==0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        if(b==0)
        {
            cout<<"No"<<"\n";
        }
        else
        {
            if(x==n&&b%2==0||a==0&&x%2==0)
            {
                cout<<"No"<<"\n";
            }
            else
            {
                cout<<"Yes"<<"\n";
            }
        }
    }


}
