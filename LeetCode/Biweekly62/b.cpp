int numOfPairs(vector<string> &nums, string target)
{
    int count = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                count++;
            }
        }
    }
    return count;
}