#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int n= nums.size();
            int furthest = 0;
            for(int i=0; i<n; i++){
                if(i>furthest)
                    return false;
                furthest = max(furthest, i+nums[i]);
                if(furthest>=n-1)
                    return true;
            }
            return false;
        }
    };