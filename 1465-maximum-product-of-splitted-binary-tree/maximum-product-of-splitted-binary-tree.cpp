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
    long long ttl = 0;
    long long maxi = 0;

    long long totalsum(TreeNode* root) {
        if(root == nullptr) return 0;
        return root->val + totalsum(root->left)+totalsum(root->right);
    }

    long long dfs(TreeNode* root) {
        if(root == nullptr) return 0;
        long long left = dfs(root->left);
        long long right = dfs(root->right);

        long long subsum = root->val + left+right;
        long long prd = subsum * (ttl - subsum);
        maxi = max(maxi,prd);
        return subsum;
    }

    int maxProduct(TreeNode* root) {
        ttl = totalsum(root);
        dfs(root);
       return maxi % 1000000007;

    }
};