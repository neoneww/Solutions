bool solve(vector<int>& nums)
{
    bool ans = false;

    int i = 0;

    while(i < nums.size())
    {
        if(nums[i] == 1)
        {
            if(ans == true)
            {
                return false;
            }
            ans = true;
            while(nums[i] == 1)
            {
                i++;
            }
        }
        i++;
    }

    return ans;
    
}
