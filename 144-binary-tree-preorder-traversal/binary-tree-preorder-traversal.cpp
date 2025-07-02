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
    void result(TreeNode* root,vector<int>& v){
        if(root == nullptr) return;
        v.push_back(root->val);
        result(root->left,v);
        result(root->right,v);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        result(root,v);
        return v;
    }
};