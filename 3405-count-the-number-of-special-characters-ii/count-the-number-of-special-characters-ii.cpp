class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> lower(26, false);
        vector<bool> upper(26, false);

        for (char ch : word) {
            if (islower(ch)) {
                // mark lowercase true only if we haven't seen uppercase yet
                lower[ch - 'a'] = !upper[ch - 'a'];
            } else {
                // mark uppercase as seen
                upper[ch - 'A'] = true;
            }
        }

        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (lower[i] && upper[i]) count++;
        }
        return count;
    }
};
