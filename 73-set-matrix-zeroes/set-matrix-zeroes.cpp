class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int first_row=1;
        int first_col=1;

        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                first_col=0;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[0][j]==0){
                first_row=0;
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(first_row==0){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        if(first_col==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
        return;
    }
};