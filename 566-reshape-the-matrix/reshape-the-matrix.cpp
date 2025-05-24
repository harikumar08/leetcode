class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> v(r,vector<int>(c));
        
        if(n*m != r*c) return mat;
        int a=0;
        int b=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v[i][j]=mat[a][b];
                b++;
                if(b==m){
                    a++;
                    b=0;
                }
            }
        }
        return v;
    }
};