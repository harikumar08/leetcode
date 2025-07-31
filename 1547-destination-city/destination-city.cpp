class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> m;
        for(auto w:paths){
            m.insert(w[0]);
        }

        for(auto w:paths){
            if(m.find(w[1]) == m.end()){
                return w[1];
            }
        }
        return "";

    }
};