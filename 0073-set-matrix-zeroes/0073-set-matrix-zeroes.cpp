class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row, col;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for (int i = 0; i < col.size(); i++) {
            int cols = col[i];
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][cols] = 0;
            }
        }
        for (int i = 0; i < row.size(); i++) {
            int rows = row[i];
            for (int j = 0; j < matrix[rows].size(); j++) {
                matrix[rows][j] = 0;
            }
        }
        return;
    }
};