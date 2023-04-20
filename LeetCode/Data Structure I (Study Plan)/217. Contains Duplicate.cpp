// link: https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> twiset;
        for(auto n : nums) {
            if(twiset.find(n)!=twiset.end()) return true;
            else twiset.insert(n);
        }
        return false;
    }
};