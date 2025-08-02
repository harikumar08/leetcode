class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            int num = nums[i-1];
            pre[i] = pre[i-1] * num;
        }

        vector<int> suf(nums.size(),1);
        for(int i= nums.size()-2;i>=0;i--){
            suf[i] = suf[i+1] * nums[i+1];
        }

        for(int i=0;i<nums.size();i++){
            nums[i] = suf[i]*pre[i];
        }

        return nums;
    }
};