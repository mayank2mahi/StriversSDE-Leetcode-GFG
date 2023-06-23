class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < matrix.size(); i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};

//By observation, we see that the first column of the original matrix is the reverse of the first row of the rotated matrix, so that’s why we transpose the matrix and then reverse each row