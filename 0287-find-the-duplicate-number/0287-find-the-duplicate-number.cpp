class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(),nums.end());
        for(i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                break;
            }
        }
        return nums[i];
    }
};