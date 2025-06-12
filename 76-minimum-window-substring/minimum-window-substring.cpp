class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        int n = s.size();
        for(int i = 0;i<t.size();i++){
            m[t[i]] += 1;
        }
        int i = 0, j = 0, start_idx = -1;
        int length = INT_MAX;
        int count = 0;
        while(j<n){
            if(m[s[j]] > 0) count++;
            m[s[j]] -= 1;
            while(count == t.size()){
                if(j-i+1 < length){
                    length = j-i+1;
                    start_idx = i;
                }
                m[s[i]] += 1;
                if(m[s[i]] > 0) count--;
                i++;
            }
            j++;
        }
        if(start_idx == -1) return "";
        else return s.substr(start_idx, length);
    }
};