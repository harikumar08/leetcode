class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss >> word){
            v.push_back(word);
        }
        
        unordered_map<char,string> m;
        int i = 0;
        if(pattern.size() != v.size()) return false;

        unordered_set<string> used;
        while(i<pattern.size()){
            if(m.find(pattern[i]) != m.end()){
               if( m[pattern[i]] != v[i]) return false;
            }
            else{
                if(used.count(v[i])) return false;
                m[pattern[i]] = v[i];
                used.insert(v[i]);
            }
            i++;
        }
        return true;

    }
};