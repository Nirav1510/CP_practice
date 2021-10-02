vector<vector<int>> construct2DArray(vector<int> &ori, int m, int n)
{
    int sz = ori.size();

    if (m * n != sz)
        return {};
    vector<vector<int>> ans(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = ori[i * n + j];
        }
    }
    return ans;
}