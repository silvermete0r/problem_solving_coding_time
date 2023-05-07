// link: https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/

class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = nums[nums.size()-1];
        int l = 0, h = max, ctr=0;
        while(l<=h) {
            ctr=0;
            int mid = l+(h-l)/2;
            for(int i=0; i<nums.size(); i++) if(nums[i]>=mid) ctr++;
            if(ctr==mid) return mid; 
            if(ctr<mid) h = mid-1; 
            else l = mid+1; 
        }
        return -1;
    }
};
