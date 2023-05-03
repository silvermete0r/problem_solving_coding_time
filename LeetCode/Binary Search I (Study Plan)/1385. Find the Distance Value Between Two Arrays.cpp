// link: https://leetcode.com/problems/find-the-distance-value-between-two-arrays


// 1st Approach: Binary Search + 2 pointers O(N*logN) Solution

class Solution {
public:
    bool isValid(vector<int>&arr,int target,int d){
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(abs(arr[mid] - target) <= d) return false;
            if(arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return true;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int cnt = 0;
        for(auto num:arr1) if(isValid(arr2,num,d)) cnt++;
        return cnt;
    }
};


// 2nd Approach: Straightforward O(N^2) Solution

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0;
        for(int i=0; i<arr1.size(); i++){
            bool flag = 1;
            for(int j=0; j<arr2.size(); j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    flag = 0;
                    break;
                }
            }
            res += flag;
        }
        return res;
    }
};