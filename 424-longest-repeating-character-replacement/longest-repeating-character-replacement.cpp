class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int i=0;
        int j=0;
        int ans = 0;
        int maxi = 0;
        vector<int> v(26,0);
        while(j<n){
            v[s[j]-'A'] ++;
            maxi = max(maxi, v[s[j]-'A']);
            if((j-i+1) - maxi > k){
                v[s[i]-'A']--;
                i++;
            }
            if((j-i+1) - maxi <= k){
                ans = max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};