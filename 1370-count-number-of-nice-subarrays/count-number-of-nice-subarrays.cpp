class Solution {
public:
    int f(vector<int> v, int k) {
        if (k < 0)
            return 0;

        int i = 0;
        int j = 0;
        int ans = 0;
        int sum = 0;
        int n = v.size();
        while (j < n) {
            sum += v[j];
            while (sum > k) {
                sum -= v[i];
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> v(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1)
                v[i] = 1;
        }

        return f(v, k) - f(v, k - 1);
    }
};