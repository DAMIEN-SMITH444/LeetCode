class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int startRow = 0 ;
        int endRow = m - 1;
        int startCol = 0;
        int endCol = n-1;

        vector<int>ans;
        int count = 0;
        int total = m * n;
        while(count < total){
            // startrow
            for(int i = startCol ;count < total && i <= endCol ; i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }startRow++;
            // endcol
            for(int i = startRow ;count < total && i <= endRow ; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }endCol--;
            // endROw
            for(int i = endCol ;count < total && i >= startCol ; i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }endRow--;
            // startcol
            for(int i = endRow ;count < total && i >= startRow ; i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }startCol++;
        }
        return ans; 
    }
};