class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Make a copy of the first m elements of nums1.
        vector<int> nums1_copy(nums1.begin(), nums1.begin() + m);
        
        int i = 0; // Pointer for nums1_copy
        int j = 0; // Pointer for nums2
        int k = 0; // Pointer for nums1

        // Merge the two arrays.
        while (i < m && j < n) {
            if (nums1_copy[i] < nums2[j]) {
                nums1[k++] = nums1_copy[i++];
            } else {
                nums1[k++] = nums2[j++];
            }
        }

        // If there are remaining elements in nums1_copy
        while (i < m) {
            nums1[k++] = nums1_copy[i++];
        }

        // If there are remaining elements in nums2
        while (j < n) {
            nums1[k++] = nums2[j++];
        }
    }
};
