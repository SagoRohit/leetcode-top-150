#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(), nums.end());
        int mlen = 0;
        for(int n: num){
            if(num.find(n-1)==num.end()){
                int len =1;
                while(num.find(n+len)!=num.end())
                    len++;
                mlen = max(mlen, len);
            }
        }
        return mlen;
    }
};