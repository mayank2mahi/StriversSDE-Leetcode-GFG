class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> v(50000,-1);
        vector<char> d(50000,-1);
        for(int i = 0; i < s.size(); i++){
            if(v[s[i]] != d[t[i]]){
                return false;
            }
            else{
                v[s[i]] = d[t[i]] = i;
            }
        }
        return true;
    }
};