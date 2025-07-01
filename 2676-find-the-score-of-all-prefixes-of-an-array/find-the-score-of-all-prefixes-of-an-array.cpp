class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> v(nums.size());
        int maxi=0;
    
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            long long sum = nums[i]+maxi;
            if(i>0){
                sum+=v[i-1];
            }
            v[i] = sum;
        }
        return v;
    }
};