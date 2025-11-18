class Solution {
public:
    bool isOperator(string ch) {
        return ch=="*" || ch=="+" || ch=="-" || ch=="/";
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string ch : tokens) {
            if(!isOperator(ch)) {
                int n = stoi(ch);
                s.push(n);
            }
            else {
                int res=0;
                if(ch == "+") {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    res = n2+n1;
                }
                else if(ch == "-") {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    res = n2-n1;
                }
                if(ch == "*") {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    res = n2*n1;
                }
                if(ch == "/") {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    res = n2/n1;
                }
                s.push(res);

            }
        }
        return s.top();
    }
};