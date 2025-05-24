class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> v;

        for(int i=0;i<m+n-1;i++){
            int j=(i<n)? 0 : i-n+1;
            int k=(i<n)? i : n-1;
            vector<int> temp;
            while(j<m && k>=0){
                temp.push_back(mat[j][k]);
                j++;
                k--;
            }
            
            if(i%2==0){
                reverse(temp.begin(),temp.end());
            }

            for(auto t:temp){
                v.push_back(t);
            }
        }

        return v;
    }

};