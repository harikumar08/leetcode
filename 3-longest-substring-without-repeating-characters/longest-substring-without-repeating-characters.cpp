class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int count = 0;
        int i=0;
        int j=0;
        while(i<=j && j<s.size()) {
            if(m.find(s[j]) == m.end()) {
                m[s[j]]++;
                count = max(count,j-i+1);
                j++;
            }
            else{
                m[s[i]]--;
                if(m[s[i]] == 0) {
                    m.erase(s[i]);
                }
                i++;
            }
        }
        return count;
    }
};