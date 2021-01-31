int solve(string s) {
    int ans = 0;
    string temp;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4'||  s[i] == '5' || s[i] =='6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            temp += s[i];
        }
        else{
            if(temp.length() != 0)
            {
                stringstream geek(temp);
                int x = 0;
                geek >> x;
                ans+=x;
                temp.clear();
            }
        }
    }
    if(temp.length() != 0)
    {
         stringstream geek(temp);
            int x = 0;
                geek >> x;
                ans+=x;
    }
    return ans;    
}

// we have a string and we have to find the sum of the digits 
