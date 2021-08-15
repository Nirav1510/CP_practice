int numOfStrings(vector<string> &p, string word)
{
    int n = p.size();
    if (n == 0)
        return 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int l = p[i].length();
        for (int j = 0; j + l <= word.size(); j++)
        {
            if (p[i][0] == word[j] && word.substr(j, l) == p[i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}