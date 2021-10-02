int solve(string A, int B, char c)
{
    int n = A.size();
    int j = 0, i = 0, count = 0;
    int ans = INT_MIN;
    while (j < n)
    {
        if (A[j] == c)
        {
            count++;
        }
        while (count > B)
        {
            if (A[i] == c)
                count--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}

int maxConsecutiveAnswers(string s, int k)
{

    int t = solve(s, k, 'T');
    int f = solve(s, k, 'F');
    return max(t, f);
}