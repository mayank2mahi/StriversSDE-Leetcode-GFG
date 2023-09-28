class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int j = nums.size();
        vector<int> v,y;
        vector<int> t;
        for(int i = 0; i < j; i++){
            if(i%2 == 0){
                v.push_back(nums[i]);
            }
            else{
                t.push_back(nums[i]);
            }
        }
        sort(v.begin(),v.end());
        sort(t.begin(),t.end());
        int k = 0;
        int l = t.size();
        for(int i = 0; i < j; i++){
            if(i%2 == 0){
                y.push_back(v[k]);
                k++;
            }else{
                y.push_back(t[l-1]);
                l--;
            }
        }
        return y;
    }
};