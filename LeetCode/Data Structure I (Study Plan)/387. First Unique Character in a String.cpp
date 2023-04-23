// link: https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        string ls = "";
        string del = "";
        for(auto l : s) {
            if(ls.find(l)!=string::npos) del += l;
            else ls += l;                       
        }
        for(auto l : ls) {
            if(del.find(l)==string::npos) return s.find(l);
        }
        return -1;
    }
};