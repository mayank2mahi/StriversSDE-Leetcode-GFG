// class Solution {                                          // BRUTE FORCE
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> v;
//         for(int i = 0; i <= nums.size() - k; i++) {
//             int maxi = INT_MIN;
//             for(int j = i; j < i + k; j++) {
//                 maxi = max(maxi, nums[j]);
//             }
//             v.push_back(maxi);
//         }
//         return v;
//     }
// };

//Approach-2 (Using max-heap (priority_queue)) (worst case :O(n*log(n)) when elements are in ascending order)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        vector<int> result;

        int n = nums.size();

        for(int i = 0; i<n; i++) {
            
            //remove the max elements which are out of window size
            while(!pq.empty() && pq.top().second <= i-k)
                pq.pop();
            
            pq.push({nums[i], i}); //we will always find the max element at top

            if(i >= k-1)
                result.push_back(pq.top().first);
        }
        return result;
    }
};

