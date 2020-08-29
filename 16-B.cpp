#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cap,contaier;
    cin>>cap>>contaier;

    vector<pair<int,int>> pp;

    for(int i=0;i<contaier;i++)
    {
        int no_con,no_match;

        cin>>no_con>>no_match;

        pp.push_back(make_pair(no_match,no_con));
    }
    int cnt=0;

    sort(pp.begin(),pp.end());
    int i=contaier-1;
    while(cap!=0)
    {
        if(cap<=pp[i].second)
        {
            cnt+=(cap*pp[i].first);
            break;
        }
        else
        {
            cnt+=(pp[i].first*pp[i].second);
            cap-=pp[i].second;
        }
        if(i==0&&cap!=0)
        {
            break;
        }
        i--;
        
    }

    cout<<cnt;

}
