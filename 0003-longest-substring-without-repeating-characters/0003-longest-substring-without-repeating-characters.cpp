class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxLength = 0;               // Sliding Window
        set<char> slidWin;
    
        for (int r = 0; r < s.length(); r++) {
            while (slidWin.find(s[r]) != slidWin.end()) {
                slidWin.erase(s[l]);
                l++; // move left pointer up
            }
            slidWin.insert(s[r]);
            maxLength = max(maxLength, r - l + 1);
        }
            
        return maxLength;
    }
};