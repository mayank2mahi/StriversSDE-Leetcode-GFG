class Solution {
public:
    string largestOddNumber(string num) {
        int j = num.size();
        for (int i = j - 1; i >= 0; i--) {
            if (num[i] % 2 == 0) {
                num.pop_back();
            } else {
                break;
            }
        }
        return num;
    }
};
