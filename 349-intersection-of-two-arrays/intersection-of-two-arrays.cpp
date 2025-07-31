class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(),nums1.end());
        unordered_set<int> res;
        for(auto num:nums2){
            if(m.find(num) != m.end()){
                res.insert(num);
            }
        }
        return vector<int>(res.begin(),res.end());
    }
};