class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        long long mul = 1;
        int n = columnTitle.size();
        for(int i=n-1;i>=0;i--){
            int num = columnTitle[i]-'A'+1;
            sum += num*mul;  
            mul = mul * 26;
        }
        return sum;
    }
};