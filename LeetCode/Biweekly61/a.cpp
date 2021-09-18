int countKDifference(vector<int> &v, int k)
{
    int n = v.size();
    int ans = 0;
    //sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(v[j] - v[i]) == k)
            {
                ans++;
            }
        }
    }
    return ans;
}

// using map
int countKDifference(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map[nums[i] + k])
            count += map[nums[i] + k];
        if (map[nums[i] - k])
            count += map[nums[i] - k];
        map[nums[i]]++;
    }
    return count;
}