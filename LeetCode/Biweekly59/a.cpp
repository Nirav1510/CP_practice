int minTimeToType(string word)
{
    int n = word.size();
    int ans = n;
    ans += min(word[0] - 'a', 26 - (word[0] - 'a'));
    for (int i = 1; i < n; i++)
    {
        int clock = abs(word[i - 1] - word[i]);
        int anti = 26 - abs(word[i - 1] - word[i]);
        ans += min(clock, anti);
    }
    return ans;
}