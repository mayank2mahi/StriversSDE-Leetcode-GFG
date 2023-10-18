class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.size();
        int nLen = needle.size();
        for (int i = 0; i <= hLen - nLen; i++) {
            if (haystack.find(needle, i) == i) {
                return i;
            }
        }
        return -1;
    }
};
