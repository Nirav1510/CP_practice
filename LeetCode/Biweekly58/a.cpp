string makeFancyString(string s)
{
    int n = s.size();

    if (n < 3)
        return s;

    int i = 0, j = 1;
    string ans = "";
    // int k=1;
    while (j < n)
    {

        if (s[i] != s[j])
        {
            ans += s[i];
            i++;
            j++;
        }
        else
        {
            while (s[i] == s[j])
            {
                j++;
            }
            ans += s[i];
            ans += s[i];
            i = j;
            j++;
        }
    }
    if (ans[ans.size() - 1] != s[n - 1])
    {
        ans += s[n - 1];
    }
    return ans;
}