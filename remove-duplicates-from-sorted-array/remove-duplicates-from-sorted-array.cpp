class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;   //It does not matter what you leave beyond the returned k
    }
};
