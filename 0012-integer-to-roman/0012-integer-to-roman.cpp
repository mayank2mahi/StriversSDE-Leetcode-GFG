class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> mp = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"},
            {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string res = "";
        for (auto i : mp) {
            while (num >= i.first) {
                res += i.second;
                num -= i.first;
            }
        }
        return res;
    }
};


//METHOD 2
// class Solution {
// public:
//     vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//     vector<string> s{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  
//     string intToRoman(int num) {
//         string res = "";
//         int i = 0;
//         while(num > 0) {
//             while(num >= val[i]) {
//                 res += s[i];
//                 num -= val[i];
//             }
//             i++;
//         }
//         return res;
        
//     }
// };