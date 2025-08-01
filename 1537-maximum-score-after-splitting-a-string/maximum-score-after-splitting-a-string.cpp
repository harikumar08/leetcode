class Solution {
public:
    int maxScore(string s) {
        int maxi =0;
        int total = count(s.begin(),s.end(),'1');
        int ones = total;
        int zeros = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == '0') zeros++;
            else ones--;
            maxi = max(maxi, ones+zeros);
        }
        return maxi;
    }
};