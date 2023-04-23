// link: https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==t.size()){
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s==t){
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};