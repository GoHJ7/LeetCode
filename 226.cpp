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
    TreeNode* r=NULL;
    void reverse(TreeNode* root, TreeNode* cur){
        if(root==NULL)
        {
            delete cur;
            cur=NULL;
            return;
        }
        cur->val=root->val;
        if(root->left!=NULL)
            cur->right=new TreeNode;
        reverse(root->left,cur->right);
        if(root->right!=NULL)
            cur->left=new TreeNode;
        reverse(root->right,cur->left);
    }
    TreeNode* invertTree(TreeNode* root) {
       if(root!=NULL)
            r=new TreeNode;
        reverse(root,r);
        return r;
    }
};
