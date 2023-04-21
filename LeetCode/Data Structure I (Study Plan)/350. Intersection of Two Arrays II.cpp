// link: https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto n : nums1) mp[n]++;
        for(auto n : nums2) if(mp.find(n)!=mp.end() && mp[n]!=0) {
            ans.push_back(n);
            mp[n]--;
        }
        return ans;
    }
};