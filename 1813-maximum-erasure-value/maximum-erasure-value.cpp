class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> m;
        int i = 0;
        int j = 0;
        int sum = 0;
        int maxi = 0;
        while (j < nums.size()) {
            if(m.find(nums[j]) == m.end()){
                m[nums[j]] = 1;
                sum += nums[j];
                j++;
            }
            else{
                sum -= nums[i];
                m.erase(nums[i]);
                i++;
            }
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};