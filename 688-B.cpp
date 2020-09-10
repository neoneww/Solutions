#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    string s;
    cin>>s;
    string p;
    p=s;
    reverse(p.begin(),p.end());
    cout<<s+p<<"\n";
}
