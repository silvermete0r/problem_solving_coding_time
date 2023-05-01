// link: https://leetcode.com/problems/guess-number-higher-or-lower/

class Solution {
public:
    int guessNumber(int n) {
        long long start = 1, end = n; 
        while(true) {
            long long mid = ceil(((long long)start+(long long)end)/2.0);
            if(guess(mid) == 0) return mid;
            (guess(mid) == -1) ? end=mid-1 : start=mid;
        }
        return 0;
    }
};