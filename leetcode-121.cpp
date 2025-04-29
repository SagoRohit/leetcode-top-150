#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy =prices[0];
        int sell=-1;
        int profit=0;
        for(int p: prices){
            if(buy>p){
                buy=p;
                continue;
            }else{
                profit = max(profit, p-buy);
            }
        }
        return profit;
    }
};