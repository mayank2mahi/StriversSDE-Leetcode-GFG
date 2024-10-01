#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++) {
            v.push_back(dj(nums1[i], nums2));
        }
        return v;
    }
    
    int dj(int j, const vector<int>& nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            if (nums2[i] == j) {
                for (int k = i + 1; k < nums2.size(); k++) {
                    if (nums2[k] > j) {
                        return nums2[k];
                    }
                }
                break;
            }
        }
        return -1;
    }
};
