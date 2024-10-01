class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c = 0;
        int k = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i + 1]){
                c++;
                k = max(k , c + 1);
            }
            else{
                c = 0;
            }
            
        }
        return k;
    }
};