class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=prices[0];
        int maxi=0;
        for(int j=1;j<prices.size();j++){
            int sum=prices[j]-i;
            maxi=max(maxi,sum);
            i=min(i,prices[j]);
        }
        return maxi;
    }
};