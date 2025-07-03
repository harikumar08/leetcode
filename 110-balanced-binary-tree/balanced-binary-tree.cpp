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
    int height(TreeNode* root,bool& k){
        if(root == nullptr) return 0;
        int left_hght = height(root->left,k);
        int right_hght = height(root->right,k);
        int num = abs(left_hght-right_hght);
        if(num>1) k = false;
        return 1+max(left_hght,right_hght);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        bool k = true;
        height(root,k);
        return k;
    }
};