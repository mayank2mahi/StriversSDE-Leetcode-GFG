class Solution {
public:
    int romanToInt(string str) {
        int n = str.length();
        if(n == 0){
            return 0;
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            switch(str[i]){
                case 'I':
                    res += 1;
                    break;
                case 'V':
                    res += 5;
                    break;
                case 'X':
                    res += 10;
                    break;
                case 'L':
                    res += 50;
                    break;
                case 'C':
                    res += 100;
                    break;
                case 'D':
                    res += 500;
                    break;
                case 'M':
                    res += 1000;
                    break;
            }
        }
        for (int i = 1; i < n; i++) {
            if ((str[i] == 'V' || str[i] == 'X') && str[i - 1] == 'I') {
                res -= 1 + 1;
            }

            if ((str[i] == 'L' || str[i] == 'C') && str[i - 1] == 'X') {
                res -= 10 + 10;
            }

            if ((str[i] == 'D' || str[i] == 'M') && str[i - 1] == 'C') {
                res -= 100 + 100;
            }
        }
        return res;
    }
};