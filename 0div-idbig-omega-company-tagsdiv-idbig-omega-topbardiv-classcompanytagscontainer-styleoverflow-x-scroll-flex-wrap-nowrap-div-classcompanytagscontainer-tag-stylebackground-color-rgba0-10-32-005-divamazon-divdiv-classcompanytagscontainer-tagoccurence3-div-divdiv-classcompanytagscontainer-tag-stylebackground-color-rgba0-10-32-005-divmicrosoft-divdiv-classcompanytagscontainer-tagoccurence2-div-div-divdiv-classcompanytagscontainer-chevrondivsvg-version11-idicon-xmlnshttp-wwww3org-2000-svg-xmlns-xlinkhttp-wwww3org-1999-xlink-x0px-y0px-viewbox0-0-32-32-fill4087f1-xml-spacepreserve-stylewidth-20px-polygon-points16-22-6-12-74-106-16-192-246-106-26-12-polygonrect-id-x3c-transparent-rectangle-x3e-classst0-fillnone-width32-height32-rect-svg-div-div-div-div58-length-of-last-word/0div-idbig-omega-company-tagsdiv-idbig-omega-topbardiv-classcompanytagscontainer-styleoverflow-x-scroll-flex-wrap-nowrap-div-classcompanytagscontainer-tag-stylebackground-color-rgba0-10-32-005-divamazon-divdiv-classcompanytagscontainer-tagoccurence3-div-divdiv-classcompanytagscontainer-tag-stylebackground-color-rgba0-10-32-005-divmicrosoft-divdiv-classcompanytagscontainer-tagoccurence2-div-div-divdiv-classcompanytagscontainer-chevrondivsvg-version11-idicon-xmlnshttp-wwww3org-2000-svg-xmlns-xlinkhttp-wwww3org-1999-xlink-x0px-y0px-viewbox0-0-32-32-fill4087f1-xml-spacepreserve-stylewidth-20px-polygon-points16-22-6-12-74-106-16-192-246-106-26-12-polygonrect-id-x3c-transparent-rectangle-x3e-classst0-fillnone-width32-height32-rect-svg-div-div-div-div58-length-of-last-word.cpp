class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int c = 0;
        while (n > 0 && s[n - 1] == ' ') {
            n--;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                c++;
            } else {
                break;
            }
        }
        return c;
    }
};
