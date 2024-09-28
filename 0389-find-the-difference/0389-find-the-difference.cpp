class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0; i < t.size(); i++){
            if(t[i] != s[i] || i > s.size() - 1){
                return t[i];
            }
        }
        return 0;
    }
};