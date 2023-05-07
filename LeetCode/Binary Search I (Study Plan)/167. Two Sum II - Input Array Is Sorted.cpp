// link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        vector<int> vec;
        while(i<=j) {
            int val = numbers[i]+numbers[j];
            if(val == target) {
                vec.push_back(i+1);
                vec.push_back(j+1);
                return vec;
            }
            if(val>target) j--;
            else i++;
        }
        return vec;
    }
};
