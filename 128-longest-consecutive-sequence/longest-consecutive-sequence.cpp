class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxi=1;
        for(int i=0; i<nums.size()-1; i++) {
            int var = nums[i] + 1;
            if(nums[i]==nums[i+1]) continue;
            else if(var == nums[i+1]){
                count += 1;
               
            } 
            
            else count=1;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};