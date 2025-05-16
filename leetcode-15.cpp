#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    void twosum(vector<int>& num, int i, vector<vector<int>>& result) {
        int n = num.size();
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = num[j] + num[k]+ num[i];
            if (!sum) {
                result.push_back({num[i], num[j], num[k]});
                j++;
                k--;
                while (j < k && num[j] == num[j - 1])
                    j++;
                while (j < k && num[k] == num[k + 1])
                    k--;
            } else if (sum < 0)
                j++;
            else
                k--;
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            if (nums[i] > 0)
                break;
            twosum(nums, i, result);
        }
        return result;
    }
};