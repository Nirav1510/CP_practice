typedef long long int ll;
long long maxMatrixSum(vector<vector<int>> &mat)
{
    ll n = mat.size();
    ll neg = 0;
    ll sum = 0;
    ll minneg = INT_MAX;
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ll temp = mat[i][j];
            if (temp < 0)
            {
                temp = abs(temp);
                neg++;
            }
            minneg = min(temp, minneg);
            sum += temp;
            total += mat[i][j];
        }
    }
    if (neg % 2 == 1)
    {
        sum -= (minneg * 2);
    }

    return max(total, sum);
}