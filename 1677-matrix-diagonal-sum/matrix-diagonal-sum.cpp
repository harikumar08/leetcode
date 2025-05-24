class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        if(n==1) return mat[0][0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        int j=0;
        for(int i=n-1;i>=0;i--){
            sum+=mat[j][i];
            j++;
        }
        if(n%2==0){
            return sum;
        }
        else{
            return sum-mat[n/2][n/2];
        }
    }
};