vector<int> findOriginalArray(vector<int> &nums)
{
    if (nums.size() % 2 != 0)
        return {};
    vector<int> res;
    sort(nums.begin(), nums.end(), greater<int>());
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i] * 2) != mp.end() and mp[nums[i] * 2] != 0)
        {
            res.push_back(nums[i]);
            mp[nums[i] * 2]--;
        }
        else
        {
            mp[nums[i]]++;
        }
    }
    if (res.size() != (nums.size() / 2))
        return {};
    return res;
}