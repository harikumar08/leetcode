class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left=j+1;
                int right=nums.size()-1;
                
                while(left<right){
                    if(left>j+1 && nums[left]==nums[left-1]){
                        left++;
                        continue;
                    }
                    long long sum=nums[left];
                    sum+=nums[right];
                    long long total=target;
                    total-= nums[i];
                    total-=nums[j];
                    if(sum==total){
                        vector<int> temp={nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(temp);
                        left++;
                        right--;
                    }
                    else if(sum<total) left++;
                    else right--;
                }
            }
        }
        return ans;
    }
};