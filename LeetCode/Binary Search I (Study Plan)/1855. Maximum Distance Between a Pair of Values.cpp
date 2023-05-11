// link: https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size(), i=0, j=0, mx=0;
        while(i<n && j<m) {
            if(nums1[i]>nums2[j]) {
                i++;
            } else {
                mx = max(mx, j++ - i);
            }
        }
        return mx;
    }
};
