// link: https://leetcode.com/problems/arranging-coins/

// 1st - Straightforward, Normal Approach
class Solution {
public:
    int arrangeCoins(int n) {
        long long row = 1, total = 1;
        while(total<=n) total+=++row;
        return row-1;
    }
};

// 2nd - Mathematical 1 line Approach
class Solution {
public:
    int arrangeCoins(int n) {
        return (int) ((-1 + Math.sqrt(1.0 + 4.0 * 2.0 * n)) / 2);
    }
};
