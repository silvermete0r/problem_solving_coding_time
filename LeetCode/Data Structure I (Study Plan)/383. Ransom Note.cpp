// link: https://leetcode.com/problems/ransom-note/description/

class Solution {
public:
    bool canConstruct(string t, string s) {
        map<char,int> mp,mp1;
        for(auto i:s) mp[i]++;
        for(auto i:t) mp1[i]++;
        bool flag = true;
        for(auto i:mp1){
            if(mp[i.first]<mp1[i.first]) flag=false;
        }
        return flag;
    }
};