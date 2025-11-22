class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++) {
            int a = nums[i]-1;
            int b = nums[i]+1;
            if(a%3==0 || b%3 ==0) count++;
        }
        return count;
    }
};