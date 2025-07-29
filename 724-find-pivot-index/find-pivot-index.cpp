class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int rightSum = 0;
         for(int i = 0;i<nums.size();i++){
            rightSum += nums[i];
         }
         int i = 0;
         int leftSum = 0;
         while(i<nums.size()){
            rightSum -= nums[i];
            if(rightSum == leftSum) return i;
            else{
                leftSum += nums[i];
                i++;
            }
         }
         return -1;
    }
};