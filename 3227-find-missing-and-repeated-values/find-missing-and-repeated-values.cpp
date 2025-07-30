class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                m[grid[i][j]]++;
                if(m[grid[i][j]] == 2) v.push_back(grid[i][j]); 
            }
        }
        
        int total = grid.size()*grid.size();
        for(int i=1;i<=total;i++){
            if(m.find(i) == m.end()){
                v.push_back(i);
                break;
            } 
        }
        return v;
    }
};