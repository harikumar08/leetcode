class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int prefixsum = nums[0];
        int suffixsum = 0;
        for(int j = 1;j<nums.size();j++) {
            suffixsum+=nums[j];
        }

        int count = 0;
        if((prefixsum - suffixsum)%2 == 0) count++;

        for(int j = 1;j<nums.size()-1;j++) {
            prefixsum += nums[j];
            suffixsum -= nums[j];
            if((prefixsum - suffixsum)%2 == 0) count++;
            
        }
        return count;
    }
};