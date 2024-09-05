class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal(rowIndex + 1, 0);
        pascal[0] = 1;
        for (int i = 1; i <= rowIndex; i++) {
            pascal[i] = 1;
            for (int j = i - 1; j > 0; j--)
                pascal[j] += pascal[j - 1];
        }
        return pascal;
    }
};