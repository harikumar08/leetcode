class Solution {
public:
    string largestEven(string s) {
        int j = s.size()-1;
        while(j>=0){
            int n = s[j] - '0';
            if(n%2 == 0){
                return s.substr(0,j+1);
            }
            j--;
        }
        return "";

    }
};