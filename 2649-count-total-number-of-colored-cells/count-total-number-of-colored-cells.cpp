class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1) return 1;

        long long ans = 0;
        long long prev = 1;
        for(int i=2;i<=n;i++) {
            prev += ans;
            ans += 4;
        }
        return ans+prev;
    }
};