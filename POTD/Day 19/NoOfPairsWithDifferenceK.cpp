/*
Time Complexity : O(n)
Space Complexity : O(n)
*/
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int count = 0;
        for(auto x : nums){
            count +=  mp[x + k] + mp[x - k];
            mp[x]++;
        }
        return count;
    }
};