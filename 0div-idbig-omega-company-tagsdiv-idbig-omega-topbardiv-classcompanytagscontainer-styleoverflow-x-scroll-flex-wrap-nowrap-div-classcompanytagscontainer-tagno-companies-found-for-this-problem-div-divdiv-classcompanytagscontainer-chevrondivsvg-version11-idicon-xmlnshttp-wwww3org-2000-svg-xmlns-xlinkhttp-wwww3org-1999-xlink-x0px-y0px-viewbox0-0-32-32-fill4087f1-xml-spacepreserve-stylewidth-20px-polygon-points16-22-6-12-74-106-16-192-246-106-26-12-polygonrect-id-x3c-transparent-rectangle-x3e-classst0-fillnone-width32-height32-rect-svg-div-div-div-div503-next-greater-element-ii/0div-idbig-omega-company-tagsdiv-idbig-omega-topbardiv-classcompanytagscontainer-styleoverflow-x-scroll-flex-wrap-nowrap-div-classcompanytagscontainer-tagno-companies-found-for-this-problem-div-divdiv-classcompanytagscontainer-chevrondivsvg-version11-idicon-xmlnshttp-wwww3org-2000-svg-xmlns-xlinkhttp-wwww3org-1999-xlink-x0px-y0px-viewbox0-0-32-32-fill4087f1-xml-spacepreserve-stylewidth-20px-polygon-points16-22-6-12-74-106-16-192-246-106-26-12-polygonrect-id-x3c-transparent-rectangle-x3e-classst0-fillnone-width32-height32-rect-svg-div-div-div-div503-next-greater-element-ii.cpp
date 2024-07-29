// WHEN THERE IS NO CIRCULAR LOOP

// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         vector<int> v(nums.size(), -1);
//         stack<int> st;
        
//         for (int i = nums.size() - 1; i >= 0; i--) {
//             while (!st.empty() && st.top() <= nums[i]) {
//                 st.pop();
//             }
//             if (st.empty()) {
//                 v[i] = -1;
//             }
//             else{
//                 v[i] = st.top();
//             }
//             st.push(nums[i]);
//         }
//         return v;
//     }
// };

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v(nums.size(), -1);
        stack<int> st;
        
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            int k = i % nums.size();
            while (!st.empty() && st.top() <= nums[k]) {
                st.pop();
            }
            if (!st.empty()) {
                v[k] = st.top();
            }
            st.push(nums[k]);
        }
        
        return v;
    }
};

