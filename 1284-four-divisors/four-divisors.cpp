class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ttlsum = 0;
        for(auto i:nums){
            int count = 0;
            int sum = 0;
            for(int j = 1;j*j<=i;j++){
                if(i%j == 0){
                    int d = i/j;
                    if(d == j){
                        sum+=j;
                        count++;
                    }
                    else{
                        sum+=d+j;
                        count+=2;
                    }
                }
            }
            if(count == 4) ttlsum+=sum;
        }
        return ttlsum;
    }
};