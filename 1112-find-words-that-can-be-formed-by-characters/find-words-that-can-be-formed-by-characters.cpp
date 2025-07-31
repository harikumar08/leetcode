class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> v(26,0);
        for(auto ch:chars){
            v[ch-'a']++;
        }

        int total = 0;
        for(auto w:words){
            vector<int> temp = v;
            bool res = true;
            for(auto ch:w){
                if(temp[ch-'a'] == 0){
                    res = false;
                    break;
                }
                temp[ch-'a']--;
            }
            if(res) total += w.size();
        }
        return total;
    }
};