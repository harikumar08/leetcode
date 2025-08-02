class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> v(26,INT_MAX);
        for(auto word:words){
            vector<int> in(26,0);
            for(auto ch:word) in[ch-'a']++;
            for(int i=0;i<26;i++){
                v[i] = min(v[i],in[i]);
            }
        }

        vector<string> res;
        for(int i=0;i<26;i++){
            while(v[i] > 0){
                res.push_back(string(1,'a'+i));
                v[i]--;
            }
        }
        return res;
    }
};