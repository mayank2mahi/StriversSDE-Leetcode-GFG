class Solution {
public:
    bool isPalindrome(string s) {
        string v;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                v.push_back(tolower(s[i]));
            }
        }
        string f = v;
	    reverse(f.begin(), f.end());
        return f == v;
    }
};