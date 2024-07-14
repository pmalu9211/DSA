#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = 1;
    vector<vector<int>> ans;
    // cout << start << end << mid;
    sort(nums.begin(), nums.end());

    while (start < end)
    {
        if ((nums[start] + nums[end] + nums[mid]) == 0)
        {
            cout << nums[start] << nums[end] << nums[mid];
            ans.push_back({nums[start], nums[end], nums[mid]});
            while ((nums[start + 1] == nums[start]) && (start < end))
            {
                start++;
            }
            start++;
            mid = start + 1;
        }
        else
        {
            if ((nums[start] + nums[end] + nums[mid]) > 0)
            {
                cout << " > " << endl;
                cout << start << " " << end << " " << mid << endl;

                if (mid > start + 1)
                {
                    mid--;
                }
                else
                {
                    end--;
                    mid = start + 1;
                }
                cout << start << " " << end << " " << mid << endl;
            }
            else if ((nums[start] + nums[end] + nums[mid]) < 0)
            {
                cout << " < " << endl;
                cout << start << " " << end << " " << mid << endl;

                if (mid < end - 1)
                {
                    mid++;
                }
                else
                {
                    start++;
                    mid = start + 1;
                }
                cout << start << " " << end << " " << mid << endl;
            }
        }
        // cout << start << " " << end << " " << mid << endl;
    }
    return ans;
}
int main()
{
    vector<int> a = {-4, -1, -1, 0, 1, 2};
    threeSum(a);
}