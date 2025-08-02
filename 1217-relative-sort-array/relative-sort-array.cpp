class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> m;
        for(auto num:arr1) m[num]++;

        vector<int> v;
        for(auto num:arr2){
            v.insert(v.end(),m[num],num);
            m.erase(num);
        }
        
        vector<int> rem;
        for(auto [num,c]:m){
            rem.insert(rem.end(),c,num);
        }
        sort(rem.begin(),rem.end());

        v.insert(v.end(),rem.begin(),rem.end());
        return v;
    }
};