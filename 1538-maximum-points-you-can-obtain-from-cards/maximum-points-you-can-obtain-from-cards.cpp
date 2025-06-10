class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total_sum = 0;
        for(int i=0; i<n; i++){
            total_sum += cardPoints[i];
        }

        if(k == n) return total_sum;

        int len = n-k;
        int remaining_sum = 0;
        int min_sum = total_sum;
        for(int i=0; i<n; i++){
            remaining_sum += cardPoints[i];
            if(i>=len) remaining_sum -= cardPoints[i - len];
            if(i>=len-1) min_sum = min(min_sum,remaining_sum);
        }
        return total_sum - min_sum;
    }
};