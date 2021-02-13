string solve(string s) {
    int i = 1;
    char p = s[0];
    int cnt = 1;
    string ans;
    while(i < s.length())
    {
        if(p == s[i])
        {
            cnt++;
        }
        else
        {
            ans = ans+ to_string(cnt);
            ans = ans+p;
            p = s[i];
            cnt = 1;
        }
        i++;
    }
     ans = ans+ to_string(cnt);
     ans = ans+p;

    return ans;
    
}
