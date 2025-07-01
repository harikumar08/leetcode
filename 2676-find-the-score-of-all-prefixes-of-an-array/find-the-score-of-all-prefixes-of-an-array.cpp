class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> v(nums.size());
        int maxi=0;
        int num= 0;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            long long sum = nums[i]+maxi;
            if(num>0){
                sum+=v[num-1];
            }
            
            cout<<sum<<" ";
            v[num] = sum;
            num++;
        }
        return v;
    }
};