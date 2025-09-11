class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> lower(26,false), upper(26,false);
        int count=0;
        for(auto ch: word){
            if(ch >= 'a' && ch<= 'z') lower[ch-'a'] = true;
            if(ch >= 'A' && ch<='Z') upper[ch-'A'] = true;
        }

        for(int i=0;i<26;i++){
            if(lower[i] && upper[i]) count++;
        }
        return count;
    }
};