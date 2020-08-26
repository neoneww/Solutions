#include<bits/stdc++.h>
using namespace std;
/*
    we are doing a brute force approach we are checking how many swords we can take
*/

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int cap_1,cap_2,no_item_1,no_item_2,weight_1,weight_2;

        cin>>cap_1>>cap_2>>no_item_1>>no_item_2>>weight_1>>weight_2;

        if(weight_1 > weight_2)
        {
            swap(weight_1,weight_2);
            swap(no_item_1,no_item_2);
        }
        int ans = 0;
        for(int i = 0; i <= min(no_item_1,cap_1/weight_1); i++ )
        {
            int cnt = min(cap_2/weight_1,no_item_1-i);   //no of sword 2 pearson either all or cnt -no of sword first pearson took

            int res = i + cnt + min((cap_1-i*weight_1)/weight_2+(cap_2-cnt*weight_1)/weight_2,no_item_2);

            ans = max(ans,res);

        }

        cout << ans <<"\n";
    }
}
