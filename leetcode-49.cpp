#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string key: strs){
            string temp = key;
            sort(key.begin(), key.end());
            mp[key].push_back(temp);
        }
        vector<vector<string>> result;
        for(auto &ch: mp){
            result.push_back(ch.second);
        }
        return result;

    }
};