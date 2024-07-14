#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int sm = 0;
    int sn = 0;
    int en = matrix[0].size() - 1;
    cout << matrix[sm][en];
    while ((matrix[sm][en] > target) && (sm < m))
    {
        // sm++;
        cout << sm << ' ' << m;

        sm = sm + 1;
    }
    // while (sn <= en) {
    //     int mid = (sn + en) / 2;
    //     if (matrix[sm][mid] == target) {
    //         return true;
    //     } else if (matrix[sm][mid] > target) {
    //         en = mid - 1;
    //     } else {
    //         sn = mid + 1;
    //     }
    // }

    return false;
}

int main()
{
    vector<vector<int>> v = {{1, 3, 5, 7},
                             {10, 11, 16, 20},
                             {23, 30, 34, 60}};
    searchMatrix(v, 3);
}