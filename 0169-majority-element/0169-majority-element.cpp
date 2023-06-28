//brute force approach

// class Solution {
// public:
//     int majorityElement(vector<int>& v) {
//         int n = v.size();

//     for (int i = 0; i < n; i++) {
//         //selected element is v[i]
//         int cnt = 0;
//         for (int j = 0; j < n; j++) {
//             // counting the frequency of v[i]
//             if (v[j] == v[i]) {
//                 cnt++;
//             }
//         }

//         // check if frquency is greater than n/2:
//         if (cnt > (n / 2))
//             return v[i];
//     }

//     return -1;
//     }
// };


//Optimal solution

class Solution {
public:
int majorityElement(vector<int> nums) {

    //size of the given array:
    int n = nums.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = nums[i];
        }
        else if (el == nums[i])
            cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
    }
};