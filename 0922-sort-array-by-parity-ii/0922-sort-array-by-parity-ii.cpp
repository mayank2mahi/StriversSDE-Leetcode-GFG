class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j = nums.size();
        vector<int> v,y;
        vector<int> t;
        for(int i = 0; i < j; i++){
            if(nums[i]%2 == 0){
                v.push_back(nums[i]);
            }
            else{
                t.push_back(nums[i]);
            }
        }
        int k =0,l=0;
        for(int i = 0; i < j; i++){
            if(i%2 == 0){
                y.push_back(v[k]);
                k++;
            }else{
                y.push_back(t[l]);
                l++;
            }
        }
        return y;
    }
};