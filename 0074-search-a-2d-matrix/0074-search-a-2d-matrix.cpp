class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int l = 0;
        int h = m*n - 1;
        
        while(l <= h){
            int mid = l + (h - l)/2;
            
            int row = mid/n;
            int col = mid%n;
            
            if(matrix[row][col] > target){
                h = mid - 1;
            }
            else if(matrix[row][col] < target){
                l = mid + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};