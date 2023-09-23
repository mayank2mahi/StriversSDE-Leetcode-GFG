class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        string r;
        for(int i = 0; i < n; i++){
            if(s[i]!='*'){
                r.push_back(s[i]);
            }
            else{
                r.pop_back();
            }
        }
        return r;
    }
};