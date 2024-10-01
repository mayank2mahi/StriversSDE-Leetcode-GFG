class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        if (st.size() < 3) {
            return *st.begin();
        }
        int c = 0;
        for (auto i : st) {
            if (c == 2) {
                return i;
            }
            c++;
        }
        return -1;
    }
};
