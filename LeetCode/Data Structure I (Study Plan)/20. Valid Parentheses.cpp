// link: https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        vector <char> vec;
        for(int i=0; i<s.size(); i++){
            if(vec.empty()){
                vec.push_back(s[i]);
            } else if(vec.back() == '(' && s[i] == ')' || vec.back() == '[' && s[i] == ']' || vec.back() == '{' && s[i] == '}') {
                vec.pop_back();
            } else {
                vec.push_back(s[i]);
            }
        }
        if(vec.empty()) return true;
        else return false;
    }
};