class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k is larger than the size of the array
        reverse(nums.begin(), nums.end()); // Reverse the entire array
        reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse the remaining elements
    }
};

// Consider an array: nums = [1, 2, 3, 4, 5] with n = 5 (size of the array).

// Case 1: Rotate the array by k = 7 positions.
// If we were to rotate the array 7 times, it would behave the same as rotating it by k % n = 7 % 5 = 2 times.