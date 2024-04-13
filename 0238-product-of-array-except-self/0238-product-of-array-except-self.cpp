class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int j = nums.size();
        
        vector<int> left(j); 
        left[0] = 1;
        vector<int> right(j);
        right[j-1] = 1;
        
        vector<int> ans(j); 

        for(int i = 1; i < j; i++){
            left[i] = nums[i-1]*left[i-1];    //left
        }
        for(int i = j-2; i >= 0; i--){
            right[i] = nums[i+1]*right[i+1];  //right
        }
        for(int i = 0; i < j; i++){
            ans[i] = left[i]*right[i];        //result
        }
        return ans;
    }
};
