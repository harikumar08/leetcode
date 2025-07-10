/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int,map<int,vector<int>>> m;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            m[col][row].push_back(temp->val);

            if(temp->left) q.push({temp->left,{row+1,col-1}});
            if(temp->right) q.push({temp->right,{row+1,col+1}});

        }

        vector<vector<int>> ans;
        for(auto& col:m){
            vector<int> temp1;
            for(auto& row:col.second){
                vector<int> temp2 = row.second;
                sort(temp2.begin(),temp2.end());
                temp1.insert(temp1.end(), temp2.begin(), temp2.end());
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};