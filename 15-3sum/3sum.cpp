class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                if(j!=i+1 && nums[j]==nums[j-1]){
                    j++;
                    continue;
                } 
                int sum=nums[j]+nums[k];
                if(sum == -nums[i]) {
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                }
                else if(sum< -nums[i]){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};