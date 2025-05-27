class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        double maxi=numeric_limits<double>::lowest();;
        int i=0;
        int j=0;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                maxi=max(maxi, (double) sum/k);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};