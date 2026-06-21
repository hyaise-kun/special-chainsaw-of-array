#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size(); // matrix column

    // right down left up

    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;

    vector<int> ans;

    while (left <= right && top <= bottom)
    {

        // right

        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }

        top++;

        // down

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }

        right--;

        // left
        if (top > bottom)
            break;

        for (int i = right; i >= left; i--)
        {
            ans.push_back(matrix[bottom][i]);
        }

        bottom--;
        // edge case

        if (left > right)
            break;

        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(matrix[i][left]);
        }

        left++;
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> venus(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> venus[i][j];
        }
    }

    vector<int> hello(solve(venus));

    for (int i = 0; i < n * m; i++)
    {
        cout << hello[i] << " ";
    }

    return 0;
}