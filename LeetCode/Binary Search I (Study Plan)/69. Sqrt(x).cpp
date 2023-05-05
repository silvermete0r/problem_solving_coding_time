// link: https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        if(!x) return 0;
        int f=1, l=x;
        while(f<=l) {
            int mid = f + (l-f)/2;
            if(mid == x/mid) return mid;
            else if(mid > x/mid) l = mid-1;
            else f = mid+1;
        }
        return l;
    }
};
