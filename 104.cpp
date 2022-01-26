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
    int preorder(TreeNode* root,int level)
    {
        int ret;
        if(root==NULL)
            return level-1;
        else
        {
            ret=max(preorder(root->left,++level),preorder(root->right,level));
        }
        return ret;
    }
    int maxDepth(TreeNode* root) {
        return preorder(root,1);
    }
};
