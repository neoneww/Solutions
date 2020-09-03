#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        set<int> pp;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                pp.insert(x);
            }
        }
        int cnt=0;

        while(!pp.empty())
        {
            int m = *pp.rbegin();
            pp.erase(m);
            if(m%2==0)
            {
                cnt++;
                pp.insert(m/2);
            }
        }

        cout<<cnt<<"\n";
    }
}
