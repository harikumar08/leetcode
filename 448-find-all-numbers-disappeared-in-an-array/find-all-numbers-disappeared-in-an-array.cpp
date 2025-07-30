class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(int i=1;i<=nums.size();i++){
            if(m.find(i) == m.end()) v.push_back(i);
        }
        return v;
    }
};