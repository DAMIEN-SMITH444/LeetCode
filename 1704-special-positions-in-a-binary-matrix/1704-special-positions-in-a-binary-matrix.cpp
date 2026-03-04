class Solution {
public:
    bool isValid(vector<vector<int>>& mat , int i , int j ){
        int m = mat.size();
        int n = mat[0].size();
        //row check
        for(int row = 0 ; row < n ;row++){
            if(row != j && mat[i][row] == 1 )return false;
        }

        //column check
        for(int col = 0 ; col < m ;col++){
            if(col != i && mat[col][j] == 1)return false;
        } 
        return true ;  
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int cnt = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(mat[i][j] == 1 && isValid( mat , i , j )){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};