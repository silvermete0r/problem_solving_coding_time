// link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size()-1;
        while(start<end) {
            int mid = (start+end)/2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid-1] < arr[mid] && arr[mid] < arr[mid+1]) start = mid;
            else end = mid;
        }
        return -1;
    }
};