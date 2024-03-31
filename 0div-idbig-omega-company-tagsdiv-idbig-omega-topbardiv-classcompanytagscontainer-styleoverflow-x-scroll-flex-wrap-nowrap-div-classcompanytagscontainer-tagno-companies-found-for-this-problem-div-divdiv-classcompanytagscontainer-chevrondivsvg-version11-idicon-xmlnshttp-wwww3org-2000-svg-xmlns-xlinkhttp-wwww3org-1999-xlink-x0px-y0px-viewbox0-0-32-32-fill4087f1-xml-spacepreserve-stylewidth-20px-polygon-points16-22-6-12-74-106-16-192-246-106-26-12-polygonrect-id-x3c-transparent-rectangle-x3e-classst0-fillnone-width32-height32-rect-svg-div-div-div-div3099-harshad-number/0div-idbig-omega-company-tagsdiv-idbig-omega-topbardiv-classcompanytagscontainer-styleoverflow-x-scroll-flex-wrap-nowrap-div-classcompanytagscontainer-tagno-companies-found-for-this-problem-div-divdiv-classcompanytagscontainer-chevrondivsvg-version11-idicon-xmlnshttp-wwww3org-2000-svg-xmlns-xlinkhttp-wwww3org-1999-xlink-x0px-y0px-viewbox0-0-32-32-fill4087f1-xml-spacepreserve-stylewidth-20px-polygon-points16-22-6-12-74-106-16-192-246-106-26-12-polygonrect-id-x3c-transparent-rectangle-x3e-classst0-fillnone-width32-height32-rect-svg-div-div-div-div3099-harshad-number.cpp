class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int originalX = x;
        while (x > 0) {
            sum = sum + x % 10;
            x = x / 10;
        }
        if (sum != 0 && originalX % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    }
};
