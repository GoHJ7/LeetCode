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
    int target;
    bool is=false;
    void sum(TreeNode* root, int s){
        if(root==NULL)
            return;
        s+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            if(s==target)
                is=true;
            return;
        }
        sum(root->left,s);
        sum(root->right,s);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        target=targetSum;
        sum(root,0);
       return is;
    }
};
