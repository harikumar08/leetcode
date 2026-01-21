class Solution {
public:
    int vowelConsonantScore(string s) {
        int c = 0;
        int v = 0;
        for(auto ch:s) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
            else if(isalpha(ch)) c++;
        }
        if(c>0) return v/c;
        else return 0;
    }
};