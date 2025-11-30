class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int i = 0, ans = 0;

        for (int j = 0; j < s.size(); j++) {
            m[s[j]]++;

            while (m[s[j]] > 1) {
                m[s[i]]--;
                if (m[s[i]] == 0) m.erase(s[i]);
                i++;
            }

            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};
