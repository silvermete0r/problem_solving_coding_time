// link: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v; 
        for (int i=0; i< mat.size(); i++){
            int low= 0; int high= mat[0].size()-1;
            while (low<= high){
                int mid= low+ (high-low)/2;
                if (mat[i][mid]==1)low= mid+1;
                else high= mid-1;
            }
            v.push_back({low,i});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for (int i=0; i<k; i++) ans.push_back(v[i].second);
        return ans;
    }
};
