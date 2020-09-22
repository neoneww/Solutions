#include<bits/stdc++.h>
using namespace std;
//what we need to find is the longest valid parenthesis  like ()()()))(( in this the longest chain of valid parenthesis is ()()() whose length is 6
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int> pp;
        pp.push(-1);
        int n = s.length();
        int result = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                pp.push(i);
            }
            else{
                pp.pop();
                if(!pp.empty()){i
                    result = max(result,i-pp.top());
                }
                else{
                    pp.push(i);
                }
                
            }
        }
        cout<<result<<"\n";
    }
}
