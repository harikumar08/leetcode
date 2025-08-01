class Solution {
public:
    int minOperations(string s) {
        int zeros = 0;
        int ones = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] != (i%2 == 0 ? '0': '1')) zeros++;
            if(s[i] != (i%2 == 0 ? '1' : '0')) ones++;
        }
        return min(zeros,ones);
        
    }
};