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
    int n;
    cin>>n;
    char arr[n+1][n+1];
    int x1,y1,x2,y2,x3,y3;         //(a,b)=queen (c,d)=bob (e,f)=final
    cin>>x1>>y1>>x2>>y2>>x3>>y3;  //y coordinate maintains the x line x maintain the y line
    //y1 maintains x
    //final y2 and y3
    if(y2>y1&&y3<y1||y2<y1&&y3>y1||x2>x1&&x3<x1||x2<x1&&x3>x1)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
    }
}
 
