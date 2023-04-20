// link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> smesh;
        for(int i=0; i<nums.size(); i++) {
            if(smesh.find(target - nums[i]) != smesh.end()) return {smesh[target - nums[i]],i};
            else smesh[nums[i]] = i;
        }
        return {};
    }
};