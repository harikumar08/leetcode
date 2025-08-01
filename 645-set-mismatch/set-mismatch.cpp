class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> seen;
        int duplicate = -1, n = nums.size();
        int actualSum = 0;

        for (int num : nums) {
            if (seen.count(num)) duplicate = num;
            seen.insert(num);
            actualSum += num;
        }

        int expectedSum = n * (n + 1) / 2;
        int missing = expectedSum - (actualSum - duplicate);
        return {duplicate, missing};
    }
};
