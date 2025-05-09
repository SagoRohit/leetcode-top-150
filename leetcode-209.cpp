#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int minlen = INT_MAX;
        int sum =0;
        int right;
        for(right =0; right<n; right++){
            sum+= nums[right];
            while(sum>=target){
                minlen = min(minlen, right-left+1);
                sum -= nums[left];
                left++;
            }
        }
        return (minlen==INT_MAX)? 0: minlen;
    }
};