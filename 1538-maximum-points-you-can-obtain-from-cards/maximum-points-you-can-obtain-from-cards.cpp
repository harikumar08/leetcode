class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_sum = 0;
        for(auto i : cardPoints){
            total_sum+=i;
        }
        int n = cardPoints.size();
        if(n == k) return total_sum;
        int i = 0;
        int j = 0;
        int cur_sum = 0;
        int len = n - k;
        int min_sum = total_sum;
        while(j<n){
            cur_sum += cardPoints[j];
            if((j-i+1) >=len){
                min_sum = min(min_sum,cur_sum);
                cur_sum -= cardPoints[i];
                i++;
            }
            j++;
        }
        return total_sum - min_sum;

    }
};