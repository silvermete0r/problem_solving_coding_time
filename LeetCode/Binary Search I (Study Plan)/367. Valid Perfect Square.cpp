// link: https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1 || num == 4 || num == 9) return true;
        int l = 1, r = num/4;
        while(l<=r) {
            int mid = (l+r)/2;
            if((long long)mid*mid == num) return true;
            if((long long)mid*mid > num) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};