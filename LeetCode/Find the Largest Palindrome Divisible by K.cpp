// Link: https://leetcode.com/problems/find-the-largest-palindrome-divisible-by-k/

class Solution {
private:
    bool isDivisibleBy7(string num) {
        int r = 0;
        for(char ch : num) {
            int d = ch - '0';
            r = (r * 10 + d) % 7;
        }
        return r == 0;
    }

public:
    string largestPalindrome(int n, int k) {
        // x is a palindrome of length n
        // x is divisible by k
        string ans = "";
        switch(k) {
            case 1:
                ans = string(n, '9');
                break;
            case 2:
                ans = string(n, '9');
                ans[0] = '8';
                ans[n-1] = '8';
                break;
            case 3:
                ans = string(n, '9');
                break;
            case 4:
                if(n < 4) {
                    ans = string(n, '8');
                } else {
                    ans = string(n, '9');
                    ans[0] = '8';
                    ans[1] = '8';
                    ans[n-2] = '8';
                    ans[n-1] = '8';
                }
                break;
            case 5:
                ans = string(n, '9');
                ans[0] = '5';
                ans[n-1] = '5';
                break;
            case 6:
                if(n < 3) {
                    ans = string(n, '6');
                } else if(n == 3) {
                    ans = string(n, '8');
                } else if(n % 2 == 0) {
                    ans = string(n, '9');
                    ans[0] = '8';
                    ans[n-1] = '8';
                    ans[n/2 - 1] = '7';
                    ans[n/2] = '7';
                } else {
                    ans = string(n, '9');
                    ans[0] = '8';
                    ans[n-1] = '8';
                    ans[n/2] = '8';
                }
                break;
            case 7:
                if(n < 3) {
                    ans = string(n, '7');
                } else {
                    ans = string(n, '9');
                    if(n % 2 == 0) {
                        for(int i=9; i>=1; i--) {
                            ans[n/2 - 1] = i + '0';
                            ans[n/2] = i + '0';
                            if(isDivisibleBy7(ans)) break;
                        }
                    } else {
                        for(int i=9; i>=1; i--) {
                            ans[n/2] = i + '0';
                            if(isDivisibleBy7(ans)) break;
                        }
                    }
                }
                break;
            case 8:
                if(n < 7) {
                    ans = string(n, '8');
                } else {
                    ans = string(n, '9');
                    ans[0] = '8';
                    ans[1] = '8';
                    ans[2] = '8';
                    ans[n-3] = '8';
                    ans[n-2] = '8';
                    ans[n-1] = '8';
                }
                break;
            case 9:
                ans = string(n, '9');
                break;
        }
        return ans;
    }
};
