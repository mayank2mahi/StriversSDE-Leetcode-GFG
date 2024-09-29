class Solution {
public:
    int countElements(vector<int>& nums) {
        int min_val = *min_element(nums.begin(), nums.end());
        int max_val = *max_element(nums.begin(), nums.end());
        
        int count = 0;
        for (int num : nums) {
            if (num > min_val && num < max_val) {
                count++;
            }
        }
        
        return count;
    }
};
