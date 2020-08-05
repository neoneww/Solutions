#include <bits/stdc++.h>
#define pb push_back
#define getarray(a,n)  for(int i=0;i<n;i++) cin>>a[i]
#define ll long long
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define w(t) int t;cin>>t;while(t--)
using namespace std;
const int N = 2e5 + 5;
const int MOD = 1e9 + 7;

int lis(int* input, int n)
{
    int* output = new int[n];
    output[0] = 1; //cause the first number will be always itself be a longest increasing subsequence
    for (int i = 1; i < n; i++)
    {
        output[i] = 1; //this is the worst case onviousley we can see that the a single number can be a longest subsequence like ex-[4,4,4,4] ans=1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (input[j] > input[i])
            {
                continue; //if we have a bigger number before us we are obviously not going to include it in our lis ans
            }

            int possibleAns = output[j] + 1;

            if (possibleAns > output[i])
            {
                output[i] = possibleAns;
            }
        }
    }

    int best = 0;
    for (int i = 0; i < n; i++)
    {
        if (best < output[i])
        {
            best = output[i];
        }
    }

    delete []output;

    return best;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = lis(arr, n);

    cout << ans << "\n";

    delete [] arr;
}
