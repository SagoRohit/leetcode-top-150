#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int mxel = nums[0];
        int count = 1;
        int maxc = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                count++;
            }
            else
            {
                if (count > maxc)
                {
                    maxc = count;
                    mxel = nums[i - 1];
                    count = 1;
                }
            }

            if (count > maxc)
            {
                mxel = nums.back();
            }

            return mxel;
        }
    }
};