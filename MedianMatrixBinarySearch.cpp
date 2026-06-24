#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int median(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, mat[i][0]);
        maxVal = max(maxVal, mat[i][m - 1]);
    }

    int desired = (n * m + 1) / 2;

    while (minVal < maxVal)
    {
        int mid = (minVal + maxVal) / 2;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            count += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
        }

        if (count < desired)
        {
            minVal = mid + 1;
        }
        else
        {
            maxVal = mid;
        }
    }

    return minVal;
}

int main()
{
    vector<vector<int>> mat =
    {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    cout << "Median = " << median(mat) << endl;

    return 0;
}
