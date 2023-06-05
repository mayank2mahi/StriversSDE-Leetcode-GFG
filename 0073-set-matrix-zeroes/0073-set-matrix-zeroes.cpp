class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<int> row(matrix.size());
        vector<int> col(matrix[0].size());
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int k = 0; k < matrix[0].size(); k++)
            {
                if (matrix[i][k] == 0)
                {
                    row[i] = 1;
                    col[k] = 1;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int k = 0; k < matrix[0].size(); k++)
            {
                if (row[i] == 1 || col[k] == 1)
                {
                    matrix[i][k] = 0;
                }
            }
        }
    }
};