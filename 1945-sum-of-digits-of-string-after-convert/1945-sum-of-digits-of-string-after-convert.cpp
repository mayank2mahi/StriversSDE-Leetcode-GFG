class Solution {
public:
    int getLucky(string s, int k) {
        vector<int> v;
        for(int i = 0; i < s.size(); i++) {
            v.push_back(s[i] - 'a' + 1);
        }

        int su = 0;
        for(int i = 0; i < v.size(); i++) {
            su = su + (v[i] / 10) + (v[i] % 10);
        }

        k = k - 1;
        while(k != 0) {
            int sum = 0;
            while(su > 0) {
                sum += su % 10;
                su /= 10;
            }
            su = sum;
            k--;
        }

        return su;
    }
};
