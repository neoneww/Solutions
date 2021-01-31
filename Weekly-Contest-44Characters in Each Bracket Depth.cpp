vector<int> solve(string s) {
    stack<char> temp;
    int cnt = 0; // this will check for the level;
    vector<int> ans; // we have to insert the no of x we can find in the current string 
    map<int,int> levelmaintain;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != ')')
        {
            if(s[i] == '(')
            {
                cnt++; // we are checking the level of our string - basically the depth of our string
            }

            temp.push(s[i]);
        }else{
            int lol = 0; // this will count the no of 'X'
            while(temp.top() != '(')
            {
                if(temp.top() == 'X')
                {
                    lol++;
                }
                temp.pop();
            }
            temp.pop();
            levelmaintain[cnt] += lol;
            cnt--;
        }
    }
    for(auto pp : levelmaintain)
    {
        ans.push_back(pp.second);
    }    

    return ans;
}
      
