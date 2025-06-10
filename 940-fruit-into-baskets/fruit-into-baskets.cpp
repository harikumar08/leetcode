class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0;
        int j = 0;
        int ans = 0;
        unordered_map<int,int> m;
        while(j < fruits.size()){
            m[fruits[j]] += 1;
            while(m.size() > 2){
                m[fruits[i]] -= 1;
                if(m[fruits[i]] == 0) m.erase(fruits[i]);
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};