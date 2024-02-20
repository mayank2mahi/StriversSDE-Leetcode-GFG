class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> v;
        sort(strs.begin(),strs.end());
        string t = strs[0];
        string q = strs[strs.size() - 1];
        for(int i = 0; i < t.size(); i++){
            if(t[i] == q[i]){
                v.push_back(t[i]);
            } else {
                break;
            }
        }
        string res;
        for(int i = 0; i < v.size(); i++){
            res = res + v[i];
        }
        return res;
    }
};
