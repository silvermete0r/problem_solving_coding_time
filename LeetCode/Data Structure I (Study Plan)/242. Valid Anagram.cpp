// link: https://leetcode.com/problems/valid-anagram


// 1st Approach using Sorting
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

// 2nd Approach using Hashing / Mapping
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if(n!=m) return false;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(auto l : s) mp1[l]++;
        for(auto l : t) mp2[l]++;
        for(auto l : s) {
            if(mp2.find(l)!=mp2.end()) {
                if(mp1[l]!=mp2[l]) return false;
            } else return false;
        }
        return true;
    }
};