class Solution {
public:
    vector<int> mergeArray(vector<int>& num1,vector<int>& num2,vector<int>& ans){
        
        int i = 0;
        int j = 0;
        while(i<num1.size() && j< num2.size()){
            if(num1[i]<=num2[j]){
                ans.push_back(num1[i]);
                i++;
            }
            else{
                ans.push_back(num2[j]);
                j++;
            }
        }
        while(i<num1.size()){
            ans.push_back(num1[i]);
            i++;
        }
        while(j<num2.size()){
            ans.push_back(num2[j]);
            j++;
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        mergeArray(nums1,nums2,ans);
        if(ans.size()%2 != 0){
            return (double)ans[ans.size()/2];
        }
        else{
            int f = ans.size()/2;
            int sum = ans[f]+ans[f-1];
            return (double)sum/2; 
        }
    }
};
