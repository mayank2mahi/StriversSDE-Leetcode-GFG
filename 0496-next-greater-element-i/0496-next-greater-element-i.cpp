class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); ++i) {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if (it != nums2.end()) {
                int index = distance(nums2.begin(), it);
                int nextGreater = -1;
                for (int j = index + 1; j < nums2.size(); ++j) {
                    if (nums2[j] > nums1[i]) {
                        nextGreater = nums2[j];
                        break;
                    }
                }
                result.push_back(nextGreater);
            } else {
                result.push_back(-1);
            }
        }
        return result;
    }
};
