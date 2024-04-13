class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int j = nums.size();
        
        vector<int> v(j, 1); 
        vector<int> s(j, 1);
        vector<int> o(j); 

        for(int i = 1; i < j; i++){
            v[i] = nums[i-1]*v[i-1];
        }
        for(int i = j-2; i >= 0; i--){
            s[i] = nums[i+1]*s[i+1];
        }
        for(int i = 0; i < j; i++){
            o[i] = v[i]*s[i];
        }
        return o;
    }
};
