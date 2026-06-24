#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();

    vector<vector<int>> memo(row, vector<int>(col, 0));

    int maxA = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 0)
                continue;

            if (j == 0)
                memo[i][j] = 1;
            else
                memo[i][j] = memo[i][j - 1] + 1;

            int width = memo[i][j];

            for (int k = i; k >= 0; k--)
            {
                width = min(width, memo[k][j]);

                int area = width * (i - k + 1);

                maxA = max(maxA, area);
            }
        }
    }

    return maxA;
}

int main()
{
    vector<vector<int>> mat =
    {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 0},
        {1, 1, 0, 0}
    };

    cout << "Area = " << maxArea(mat) << endl;

    return 0;
}
