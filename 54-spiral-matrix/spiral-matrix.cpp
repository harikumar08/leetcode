class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        int row=0,col=0;

        vector<int> row_delta={0,1,0,-1};
        vector<int> col_delta={1,0,-1,0};
        
        int pos=0;
        vector<int> ans;
        while(ans.size() != m*n){
            ans.push_back(matrix[row][col]);
            matrix[row][col]=10000;
            int next_row=row+row_delta[pos];
            int next_col=col+col_delta[pos];
            if(next_row>=m || next_col>=n || next_row<0 || next_col<0 || matrix[next_row][next_col]==10000){
                pos+=1;
                pos%=4;
            }
            row+=row_delta[pos];
            col+=col_delta[pos];
        }
        return ans;
    }
};