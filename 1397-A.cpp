#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                arr[s[i]-'a']++;
            }
        }
        bool flag=1;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0&&arr[i]%n!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
