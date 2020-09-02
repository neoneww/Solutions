#include<bits/stdc++.h>
#define int long long
using namespace std;


	auto sgn = [&](int x) {
		if (x > 0) return 1;
		else return -1;
	};

int32_t main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;

        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum =0;


        for(int i=0;i<n;i++)
        {
            int curr = arr[i];

            int j = i;

            while(j<n&&sgn(arr[i])==sgn(arr[j]))
            {
                curr = max(curr,arr[j]);

                j++;
            }
            sum+=curr;

            i=j-1;

        }

        cout<<sum<<"\n";


    }





}
