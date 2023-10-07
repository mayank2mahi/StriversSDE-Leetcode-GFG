class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long rev = 0;
        long long h = x;

        while (h > 0) {
            int k = h % 10;
            rev = rev * 10 + k;
            h = h / 10;
        }

        return rev == x;
    }
};
