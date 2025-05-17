class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }   
        int count;
        int maxi=0;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                count=1;
                int i=x+1;
                while(s.find(i)!=s.end()){
                    count++;
                    i++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};