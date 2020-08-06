class Solution {
public:
    int maxSubArray(vector<int>& arr)
    {
        
        int current_sum=0;
        int best_sum=0;
        int n=arr.size();
        if(n==1)
        {
            return arr[0];
        }
        for(int i=0;i<n;i++)
        {
            current_sum+=arr[i];
            if(best_sum<current_sum)
            {
                best_sum=current_sum;
            }
            if(current_sum<0)
            {
                current_sum=0;
            }
        }
        
        if(best_sum==0)
        {
            sort(arr.begin(),arr.end());
            return arr[n-1];
        }
        
        return best_sum;
        
    }
};
