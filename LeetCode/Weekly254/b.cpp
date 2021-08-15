vector<int> rearrangeArray(vector<int> &arr)
{
    for (int i = 1; i < arr.size() - 1; ++i)
    {
        if (arr[i] * 2 == arr[i - 1] + arr[i + 1])
        {
            swap(arr[i], arr.back());
        }
    }
    return arr;
}

//other one
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    int a = 0, b = (n + 1) / 2;
    sort(nums.begin(), nums.end());
    vector<int> ans;
    while (b < n)
    {
        ans.push_back(nums[a++]);
        ans.push_back(nums[b++]);
    }
    if (a < (n + 1) / 2)
        ans.push_back(nums[a]);
    return ans;
}