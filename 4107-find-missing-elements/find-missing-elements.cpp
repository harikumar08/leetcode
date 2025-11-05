class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());

        int mini = nums[0];
        int maxi = nums[0];
        for(int x : nums) {
            mini = min(mini, x);
            maxi = max(maxi, x);
        }

        vector<int> ans;

        for(int i=mini;i<=maxi;i++) {
            if(s.find(i) == s.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};