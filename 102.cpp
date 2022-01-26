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
    vector<vector<int>> ret;
    void preorder(TreeNode* root,int level)
    {
        if(root==NULL)
            return;
        else
        {
            if(ret.size()<level)
                ret.push_back(vector<int>());
            ret[level-1].push_back(root->val);
            preorder(root->left,++level);
            preorder(root->right,level);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        preorder(root,1);
        return ret;
    }
	};
