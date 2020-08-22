#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    
    int n,x;
    cin>>n>>x;
    
    vector<pair<int,int>> arr;
    
    for(int i=0;i<n;i++)
    {
        int a;
        
        cin>>a;
        
        arr.push_back(make_pair(a,i+1));
    }
    
    sort(arr.begin(),arr.end());
    
    int i=0,j=n-1;
    bool flag=1;
    while(i<j)
    {
        if(arr[i].first+arr[j].first==x)
        {
            int a=arr[i].second;
            int b=arr[j].second;
            if(a>b)
            {
                swap(a,b);
            }
            cout<<a<<" "<<b;
            flag=0;
            break;
        }
        else if(arr[i].first+arr[j].first>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    
    if(flag)
    {
        cout<<"IMPOSSIBLE";
    }
}
