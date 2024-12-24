class Solution {
public:
    // 1 2 3 4 5 6 7
    // 3
    // 7 6 5 1 2 3 4
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int j = n - k;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end() - j);
        reverse(nums.begin() + k, nums.end());
    }
};