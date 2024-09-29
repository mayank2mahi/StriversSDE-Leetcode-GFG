class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int h = 1;
        int ans = -1;
        if(nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 3){
            if(nums[0] == nums[1]){
                return nums[2];
            }
            else{
                return nums[0];
            }
        }
        else{
            for(int i = 0; i < nums.size() - 2; i++){
                if(nums[l] == nums[h]){
                    l = l + 2;
                    h = h + 2;
                }
                else{
                    ans = nums[l]; 
                }
            }
        }
        return ans;
    }
};