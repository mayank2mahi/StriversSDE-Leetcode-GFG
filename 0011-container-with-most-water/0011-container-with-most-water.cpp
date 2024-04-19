class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int maxArea = 0;
        while(l < r){
            int h = min(height[l], height[r]);
            maxArea = max(maxArea, h * (r - l));
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
    }
};
