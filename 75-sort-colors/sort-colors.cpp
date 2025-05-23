class Solution {
public:
    void sortColors(vector<int>& nums) {
        //National ducth flag algorithm
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(mid<=high){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else{
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
        }
    }
};