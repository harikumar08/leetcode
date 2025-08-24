class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int zeroc = 0;
        int ans = 0;
        int onesc = 0;
        while(j<nums.size()){
            if(nums[j] == 0){
                zeroc++;
            }
            else if(nums[j] == 1){
                onesc++;
            }

            while(zeroc > 1){
                if(nums[i] == 0) zeroc--;
                else if(nums[i] == 1) onesc--;
                i++;
            }
            ans = max(ans,onesc);
            j++;
        }
        if(ans == nums.size()) return ans-1;
        return ans;
    }
};