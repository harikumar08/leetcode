class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto num:arr){
            m[num]+=1;
        }
        int ans = -1;
        for(auto& [num,count]:m){
            if(num == count){
                ans = max(ans,num);
            }
        }
        return ans;
    }
};