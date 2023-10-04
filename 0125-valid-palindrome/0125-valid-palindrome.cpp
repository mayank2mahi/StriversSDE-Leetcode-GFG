class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])) {
                t.push_back(tolower(s[i]));
            }
        }
        string reversed_t = t; // Make a copy of t
        reverse(reversed_t.begin(), reversed_t.end()); // Reverse the copy
        
        return t == reversed_t; // Check if t is equal to its reverse
    }
};