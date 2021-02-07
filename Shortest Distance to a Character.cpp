class Solution {
public:
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> ans;
        vector<int> temp;

        for(int i=0;i<s.length();i++)
        {
            ans.push_back(INT_MAX);
        }


        for(int i=0;i<s.length();i++)
        {
            if(s[i] == c)
            {
                ans[i] = 0;
            }
        }

        // temp will store all the char place 


        for(int i=0;i<s.length();i++)
        {
            if(s[i] == c)
            {
                temp.push_back(i);  // i will store all the char place 
            }
        }

        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s[j] != c)
                {
                    ans[j] = min(ans[j],abs(temp[i]-j));
                }
            }
        }

        return ans;

    }
};
