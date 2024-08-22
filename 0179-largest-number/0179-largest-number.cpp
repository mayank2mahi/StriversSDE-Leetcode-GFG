class Solution {
public:
    static bool compi(int a,int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(), compi);
        string h;
        string g = "0";
        for(int i = 0; i < nums.size(); i++){
            h = h + to_string(nums[i]);
        }
        if(h[0] == '0'){
            return g;
        }
        return h;
    }
};