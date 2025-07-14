class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
        int k=0;
        while(1){
            for(int i=1;i<n;i++){
                if(strs[0].size()==k || k==strs[i].size()) return strs[i].substr(0,k);
                if(strs[0][k]!=strs[i][k]) return strs[0].substr(0,k);
            }
            k++;
        }

    }
};