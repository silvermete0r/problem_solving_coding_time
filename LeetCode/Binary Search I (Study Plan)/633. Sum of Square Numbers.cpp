// link: https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0, right = sqrt(c);
        while (left <= right) {
            long long total = left*left + right*right;
            if (total == c) return true;
            if (total < c) left++;
            else right--;
        }
        return false;
    }
};
