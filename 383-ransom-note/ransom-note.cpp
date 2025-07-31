class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26,0);
        for(auto ch:magazine){
            v[ch-'a']++;
        }

        
        for(auto ch:ransomNote){
            if(v[ch-'a'] == 0){
                return false;
            }
            else{
                v[ch-'a']--;
            }
        }
        return true;
    }
};