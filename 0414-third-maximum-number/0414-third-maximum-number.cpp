class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        if (mp.size() < 3) {
            return mp.rbegin()->first;
        }
        int c = 0;
        for (auto i = mp.rbegin(); i != mp.rend(); i++) {
            if (c == 2) {
                return i->first;
            }
            c++;
        }
        return -1;
    }
};
