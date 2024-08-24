class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int carry = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        while (i >= 0 || j >= 0 || carry > 0) {
            if (i >= 0) {
                carry += num1[i] - '0';
                i--;
            }
            if (j >= 0) {
                carry += num2[j] - '0';
                j--;
            }
            res = char((carry % 10) + '0') + res;
            carry = carry / 10;
        }
        return res;
    }
};

