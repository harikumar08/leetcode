class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        int x = 0, y = 0;
        s.insert({x,y});
        for(auto ch:path){
            if(ch == 'N') y++;
            else if(ch == 'S') y--;
            else if(ch == 'E') x++;
            else x--;

            if(s.count({x,y})) return true;
            s.insert({x,y});
        }
        return false;
    }
};