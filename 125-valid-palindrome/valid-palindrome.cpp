class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto ch:s) {
            if(isalnum(ch)) res.push_back(tolower(ch));
        }

        int i=0;
        int j=res.size()-1;
        while(i<=j) {
            if(res[i] != res[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};