class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxi = 0;
        long long ans = 0;
        for(int i=0;i<dimensions.size();i++){
            long long w = dimensions[i][0], h = dimensions[i][1];
            long long d = w*w + h*h;
            long long a = w*h;

            if(d > maxi || (d == maxi && a > ans)){
                maxi = d;
                ans = a;
            }
        }
        return (int) ans;

        
    }
};