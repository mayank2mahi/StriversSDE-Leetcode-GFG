class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                c++;
            }
        }
        
        nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
        
        for (int i = 0; i < c; i++) {
            nums.push_back(0);
        }
    }
};