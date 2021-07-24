#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int smallestChair(vector<vector<int>> &A, int t)
{
    t = A[t][0];

    sort(A.begin(), A.end());

    int n = A.size();
    priority_queue<int, vector<int>, greater<int>> pq1;
    for (int i = 0; i <= 1e4 + 1; i++)
    {
        pq1.push(i);
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;
    for (int i = 0; i < n; i++)
    {
        while (pq2.size() && pq2.top().first <= A[i][0])
        {
            pq1.push(pq2.top().second);
            pq2.pop();
        }
        if (t == A[i][0])
            return pq1.top();
        pq2.push({A[i][1], pq1.top()});
        pq1.pop();
    }

    return -1;
}