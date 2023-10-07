class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c = 0;
        for (int i = low; i <= high; i++) {
            string t = to_string(i);
            int s = t.size();
            int sum = 0;
            for (int j = 0; j < s / 2; j++) {
                sum += t[j] - t[s - 1 - j];
            }
            if (s % 2 == 0 && sum == 0) {
                c++;
            }
        }
        return c;
    }
};
