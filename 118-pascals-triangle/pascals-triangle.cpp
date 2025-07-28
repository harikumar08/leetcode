class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if(numRows == 0) return v;
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1},{1,1}};
        v.push_back({1});
        v.push_back({1,1});
        vector<int> prev = {1,1};
        for(int i = 2;i<numRows;i++){
            vector<int> ans(i+1,1);
            
            for(int j = 1 ;j<i;j++){
                ans[j] = prev[j-1]+prev[j];
            }
            v.push_back(ans);
            prev = ans;
        }
        return v;
    }
};