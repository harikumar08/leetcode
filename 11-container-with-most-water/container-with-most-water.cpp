class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int max_water_stored = 0;
        while(i<j){
            int len = j - i;
            int mini = min(height[i],height[j]) * len;
            max_water_stored = max(max_water_stored, mini);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max_water_stored;
    }
};