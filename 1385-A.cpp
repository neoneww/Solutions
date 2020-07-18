#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        set<int> num;
        num.insert(x);num.insert(y);num.insert(z);
        if(num.size()==3)
        {
            cout<<"NO"<<"\n";
        }
        else if(num.size()==1)
        {
                cout<<"YES"<<"\n";
                for(int i=0;i<3;i++)
                {
                    cout<<x<<" ";
                }
                cout<<"\n";
        }
         else if(x==y&&z<x)
         {
                cout<<"YES"<<"\n";
                cout<<x<<" "<<z<<" "<<z<<"\n";
        }
         else if(y==z&&x<y)
         {
                cout<<"YES"<<"\n";
                cout<<x<<" "<<x<<" "<<z<<"\n";
        }
         else if(x==z&&y<z)
         {
                cout<<"YES"<<"\n";
                cout<<y<<" "<<x<<" "<<y<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }

      }
}
