// Problem  : 1. Two Sum
// Link     : https://leetcode.com/problems/two-sum/
// Language : cpp
// Verdict  : Accepted
// Runtime  : 2 ms
// Memory   : 15 MB
// Difficulty: Easy
// Date     : 2026-07-01

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
        return{-1, -1};
    }
};