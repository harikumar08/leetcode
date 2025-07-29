class Solution {
public:
    int maxDifference(string s) {
        int evenMax = s.size();
        int oddMax = 0;
        unordered_map<char,int> m;
        for(auto ch:s){
            m[ch]++;
        }
        for(auto pair:m){
            if(pair.second % 2 == 0){
                evenMax = min(evenMax,pair.second);
            }
            else{
                oddMax = max(oddMax,pair.second);
            }
        }
        return oddMax - evenMax;
    }
};