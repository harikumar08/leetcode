class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        for(auto email: emails){
            int at = email.find('@');
            string local = email.substr(0,at);
            string domain = email.substr(at);

            int plus = local.find('+');
            if(plus != string::npos){
                local = local.substr(0,plus);
            }

            local.erase(remove(local.begin(),local.end(),'.'),local.end());
            s.insert(local+domain);
        }
        return s.size();
    }
};