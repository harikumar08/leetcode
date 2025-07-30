class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        vector<int> freq(total + 1, 0);
        int repeated = -1, missing = -1;

        for (const auto& row : grid) {
            for (int val : row) {
                freq[val]++;
                if (freq[val] == 2) repeated = val;
            }
        }

        for (int i = 1; i <= total; ++i) {
            if (freq[i] == 0) {
                missing = i;
                break;
            }
        }

        return {repeated, missing};
    }
};
