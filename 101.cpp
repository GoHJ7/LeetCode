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
    void preorder(TreeNode* root, int level)
    {
        if(root==NULL)
        {
            if(ret.size()<level)
                ret.push_back(vector<int>());
            ret[level-1].push_back(101);
            return;
        }
        else
        {
            if(ret.size()<level)
                ret.push_back(vector<int>());
            ret[level-1].push_back(root->val);
            preorder(root->left,++level);
            preorder(root->right,level);
        }
        return;
    }
    bool isSymmetric(TreeNode* root) {
        preorder(root, 1);
        for(int i=1;i<ret.size();i++)
        {
            for(int j=0;j<ret[i].size()/2;j++)
            {
                if(ret[i][j]!=ret[i][ret[i].size()-j-1])
                    return false;
            }
        }
        return true;
    }
};
