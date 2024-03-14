class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size(), len2 = num2.size();
        vector<int> result(len1 + len2, 0);

        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];
                result[i + j] += sum / 10;
                result[i + j + 1] = sum % 10;
            }
        }

        int i = 0;
        while (i < result.size() && result[i] == 0) {
            i++;
        }

        if (i == result.size()) {
            return "0";
        }

        string res = "";
        for (; i < result.size(); i++) {
            res += to_string(result[i]);
        }

        return res;
    }
};
