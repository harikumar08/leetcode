class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> v(26,0);
        for(auto ch:allowed){
            v[ch-'a']++;
        }
        int total = 0;
        for(auto w:words){
            bool res = true;
            for(auto ch:w){
                if(v[ch-'a'] == 0){
                    res = false;
                    break;
                }
            }
            if(res) total++;
        }
        return total;
    }
};