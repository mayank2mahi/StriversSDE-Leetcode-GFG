class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> mpp;
        for(int i = 0; i < strs.size(); i++){
            string tt = strs[i];
            sort(tt.begin(),tt.end());
            mpp[tt].push_back(strs[i]);
        }
        
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};