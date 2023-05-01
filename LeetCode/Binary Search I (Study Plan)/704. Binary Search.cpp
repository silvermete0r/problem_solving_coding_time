// link: https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0, last = nums.size()-1;
        while(first<=last) {
            int mid = (first+last)/2;
            if(nums[mid] == target) return mid;
            (nums[mid] > target)?last = mid-1:first = mid+1;
        }
        return -1;
    }
};