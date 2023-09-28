class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j = nums.size();
        vector<int> result(j);

        int evenIndex = 0;
        int oddIndex = 1;

        for (int i = 0; i < j; i++) {
            if (nums[i] % 2 == 0) {
                result[evenIndex] = nums[i];
                evenIndex += 2;
            } else {
                result[oddIndex] = nums[i];
                oddIndex += 2;
            }
        }

        return result;
    }
};
