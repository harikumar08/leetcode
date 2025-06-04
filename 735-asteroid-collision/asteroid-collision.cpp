class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]>0){
                stk.push(asteroids[i]);
            }
            else{
                while(!stk.empty() && stk.top()>0 && (stk.top()+asteroids[i])<0){
                    stk.pop();
                }
                if(stk.empty() || stk.top() < 0){
                    stk.push(asteroids[i]);
                }
                else if(stk.top() + asteroids[i] == 0){
                    stk.pop();
                }
            }
        }

        vector<int> v(stk.size());
        int i = stk.size()-1;
        while(!stk.empty()){
            v[i] = stk.top();
            stk.pop();
            i--;
        }
        return v;
    }
};