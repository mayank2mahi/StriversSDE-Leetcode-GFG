class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int s = 0;
        for(int i = 0; i < chalk.size(); i++) {
            s = s + chalk[i];
            if (s > k) {
                break;
            }
        }
        int h = k % s;
        for(int i = 0; i < chalk.size(); i++) {
            if(h < chalk[i]) {
                return i;
            } else {
                h = h - chalk[i];
            }
        }
        return 0;
    }
};
