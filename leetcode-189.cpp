#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> temp(n);
        k%=n;
        for(int i=0; i<n; i++){
            temp[(k+i)%n]= nums[i];
        } 
        nums = temp;
    }
};
int main(){

    return 0;
}