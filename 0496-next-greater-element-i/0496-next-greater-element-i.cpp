class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        
        for(int i = nums2.size() - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            
            int res = 0;
            if(st.empty()){
                res = -1;
            }
            else{
                res = st.top();
            }
            mp.insert({nums2[i], res});
            st.push(nums2[i]);
            
        }
        vector<int> ans;
        for(auto j : nums1){
            ans.push_back(mp[j]);
        }
        return ans;
    }
};